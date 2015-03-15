#ifndef ACTIVEEDGE_H
#define ACTIVEEDGE_H
#include <cmath>

class ActiveEdge
{
public:
	int ymax;
	int ymin;
	int xval;
	int x0, y0, x1, y1;
	
	
	bool operator< (const ActiveEdge& edge) const;

	ActiveEdge(int xval, int ymax, int ymin, int x0, int y0, int x1, int y1);

	void processX(int scanLine);
};

#endif