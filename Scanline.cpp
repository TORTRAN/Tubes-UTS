#include "Scanline.h"

static void Scanline::fill(std::vector <Point> arrPoint, Color color)
{

//Ubah vector point jadi vector edge
	std::vector <Edge> globalEdges;
	int i, j;
	for (i=0; i<arrPoint.size(); i++)
	{
		Edge edge(arrPoint.at(i).x, arrPoint.at(i).y, arrPoint.at((i+1) % arrPoint.size()).x, arrPoint.at((i+1) % arrPoint.size()).y);
		if (edge.m != 0)
		{
			globalEdges.push_back(edge);	
		}
	}
	//Sort
	std::sort(globalEdges.begin(), globalEdges.end());
	int scanLine = globalEdges.at(0).ymin;

	//Initialize active edge
	std::vector <ActiveEdge> activeEdges;
	i = 0;
	while (globalEdges.at(0).ymin <= scanLine)
	{
		Edge front = globalEdges.front();
		globalEdges.erase(globalEdges.begin());
		ActiveEdge activeEdge(front.x, front.ymax, front.ymin, front.m, front.x0, front.y0, front.x1, front.y1);
		activeEdges.push_back(activeEdge);
	}

	while (activeEdges.size() != 0)
	{
		int parity = 0;
		std::sort(activeEdges.begin(), activeEdges.end());
		int intersectCounter = 0;
		if (scanLine == 129)
		{
			std::cout << "Break" << std::endl;
		}
		for (i=5; i <750; i++)
		{
			//TODO: cek localMaxima/localMinima, ubah-ubah parity
			if (intersectCounter < activeEdges.size())
			{
				if (i == activeEdges.at(intersectCounter).xval)
				{
					if (intersectCounter + 1 < activeEdges.size())
					{
						if (activeEdges.at(intersectCounter).xval == activeEdges.at(intersectCounter + 1).xval)
						{
							//Cek localMaxima
							if(activeEdges.at(intersectCounter).ymax == activeEdges.at(intersectCounter + 1).ymax)
							{
								parity++;
							} else if (activeEdges.at(intersectCounter).ymin == activeEdges.at(intersectCounter + 1).ymin)
							{
								parity++;
							}
							intersectCounter++;
						}
					}
					parity++;
					intersectCounter++;
				}
			}
			if (parity % 2 == 1)
			{
				Color c = birdPattern.getColor(i, scanLine);
				setPixelCol(i, scanLine, c);				
			}
		}
		scanLine++;
		i =0;
		while (i<activeEdges.size())
		{
			if(activeEdges.at(i).ymax == scanLine)
			{
				activeEdges.erase(activeEdges.begin() + i);
			} else {
				i++;
			}
		}
		//Update x value
		for(i=0; i<activeEdges.size(); i++)
		{
			
			//activeEdges.at(i).xval = activeEdges.at(i).xval + activeEdges.at(i).onePerM;
			
			activeEdges.at(i).drawLine(scanLine);
		}
		//Ambil dari global edges
		while(globalEdges.front().ymin == scanLine)
		{
			Edge front = globalEdges.front();
			globalEdges.erase(globalEdges.begin());
			
			ActiveEdge activeEdge(front.x, front.ymax, front.ymin, front.m, front.x0, front.y0, front.x1, front.y1);
			activeEdges.push_back(activeEdge);
			if (globalEdges.empty())
			{
				break;
			}
		}
	}
}