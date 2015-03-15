#include "ScanlineFill.h"

void ScanlineFill::fill(std::vector <Point> arrPoint, Color color, FrameBuffer &fb)
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
		ActiveEdge activeEdge(front.x, front.ymax, front.ymin, front.x0, front.y0, front.x1, front.y1);
		activeEdges.push_back(activeEdge);
		if (globalEdges.size() == 0) break;	
	}

	while ((activeEdges.size() != 0) && (fb.vinfo.yres))
	{
		int parity = 0;
		std::sort(activeEdges.begin(), activeEdges.end());
		int intersectCounter = 0;
		
		for (i=0; i <fb.vinfo.xres; i++)
		{
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
				fb.setPixel(i, scanLine, color);				
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
			activeEdges.at(i).processX(scanLine);
		}
		//Ambil dari global edges
		while(globalEdges.front().ymin == scanLine)
		{
			Edge front = globalEdges.front();
			globalEdges.erase(globalEdges.begin());
			
			ActiveEdge activeEdge(front.x, front.ymax, front.ymin, front.x0, front.y0, front.x1, front.y1);
			activeEdges.push_back(activeEdge);
			if (globalEdges.empty())
			{
				break;
			}
		}
	}
}

void ScanlineFill::fill(std::vector <Point> arrPoint, Pattern * pattern, FrameBuffer &fb)
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
		ActiveEdge activeEdge(front.x, front.ymax, front.ymin, front.x0, front.y0, front.x1, front.y1);
		activeEdges.push_back(activeEdge);
		if (globalEdges.size() == 0) break;	
	}

	while ((activeEdges.size() != 0) && (fb.vinfo.yres))
	{
		int parity = 0;
		std::sort(activeEdges.begin(), activeEdges.end());
		int intersectCounter = 0;
		
		for (i=0; i <fb.vinfo.xres; i++)
		{
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
				fb.setPixel(i, scanLine, pattern->getColor(Point(i, scanLine)));	
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
			activeEdges.at(i).processX(scanLine);
		}
		//Ambil dari global edges
		while(globalEdges.front().ymin == scanLine)
		{
			Edge front = globalEdges.front();
			globalEdges.erase(globalEdges.begin());
			
			ActiveEdge activeEdge(front.x, front.ymax, front.ymin, front.x0, front.y0, front.x1, front.y1);
			activeEdges.push_back(activeEdge);
			if (globalEdges.empty())
			{
				break;
			}
		}
	}
}