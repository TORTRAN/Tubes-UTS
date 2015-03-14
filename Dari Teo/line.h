#ifndef LINE_H
#define LINE_H

#include "base.h"

extern FrameBuffer fb;
using namespace std;

class Line{
public:
	Point P1;
	Point P2;
	Color c;

	Line();
	Line(int x1, int y1, int x2, int y2);
	void line(int x1, int y1, int x2, int y2);
	void draw();
	int getX(int y);
	int getY(int x);
};
#endif
