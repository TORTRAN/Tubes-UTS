#include "Edge.h"

void Edge::calculateGradient(int x0, int y0, int x1, int y1)
{
	m = (double) (y0 - y1) / (double) (x0 - x1);
}

Edge::Edge(int x0, int y0, int x1, int y1): x0(x0), x1(x1), y0(y0), y1(y1)
{
	if (y0 > y1)
	{
		ymin = y1;
		ymax = y0;
		x = x1;
	} else 
	{
		ymin = y0;
		ymax = y1;
		x = x0;
	}
	calculateGradient(x0, y0, x1, y1);
}

bool Edge::operator< (const Edge& edge) const
{
	return (ymin < edge.ymin);
}
