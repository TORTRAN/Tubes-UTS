#ifndef ACTIVEEDGE_H
#define ACTIVEEDGE_H

class ActiveEdge
{
public:
	int ymax;
	int ymin;
	int xval;
	int x0, y0, x1, y1;
	
	
	bool operator< (const ActiveEdge& edge) const
	{
		return (xval < edge.xval);
	}

	ActiveEdge(int xval, int ymax, int ymin, int x0, int y0, int x1, int y1): xval(xval), ymax(ymax), ymin(ymin)
		,x0(x0), x1(x1), y0(y0), y1(y1)
	{

	}

	void processX(int scanLine){
		int dx = abs (x1-x0), sx = x0<x1 ? 1 : -1;
		int dy = - abs (y1-y0), sy = y0<y1 ? 1 : -1;
		int error = dx + dy, e2;

		int x0 = this->x0;
		int y0 = this->y0;
		int x1 = this->x1;
		int y1 = this->y1;

		for (;;){
			if ((x0==x1 && y0==y1) || (y0 == scanLine)) break;
			e2 = 2 * error;
			if (e2 >= dy) {error += dy; x0 += sx;}
			if (e2 <= dx) {error += dx; y0 += sy;}
		}
		xval = x0;
	}
};

#endif