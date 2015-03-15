#include "ActiveEdge.h"

bool ActiveEdge::operator< (const ActiveEdge& edge) const
{
	return (xval < edge.xval);
}

ActiveEdge::ActiveEdge(int xval, int ymax, int ymin, int x0, int y0, int x1, int y1): xval(xval), ymax(ymax), ymin(ymin)
	,x0(x0), x1(x1), y0(y0), y1(y1)
{

}

void ActiveEdge::processX(int scanLine){
	int dx = std::abs (x1-x0), sx = x0<x1 ? 1 : -1;
	int dy = - std::abs (y1-y0), sy = y0<y1 ? 1 : -1;
	int error = dx + dy, e2;
	int x0 = this->x0;
	int y0 = this->y0;
	int x1 = this->x1;
	int y1 = this->y1;
	for (;;){
		if ((x0==x1 && y0==y1) || (y0 == scanLine + 1)) break;
		e2 = 2 * error;
		if (e2 >= dy) {error += dy; x0 += sx;}
		if (e2 <= dx) {error += dx; y0 += sy;}
	}
	xval = x0;
}