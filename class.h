/*
contain class:
-color
-point
-Frame buffer
-line
-polygon
-building
-peta
*/
#ifndef CLASS_H
#define CLASS_H

#include <vector>
#include <unistd.h>
#include <fcntl.h>		/* for fcntl */
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>		/* for mmap */
#include <sys/ioctl.h>
#include <linux/fb.h>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <vector>
 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Color{
	public:
	int Red;
	int Green;
	int Blue;
	
	Color();
	Color(int red, int green, int blue);
	
	void setRed(int r);
	void setGreen(int g);
	void setBlue(int b);
};

class Point{
public:
	int x;
	int y;

	Point();
	Point(int x1, int y1);
};

class FrameBuffer
{
public:
	char* fbp;
	long int screensize;
	struct fb_var_screeninfo vinfo;
	struct fb_fix_screeninfo finfo;
	int fbfd;					/* frame buffer file descriptor */

	FrameBuffer();
	void setPixel(int x, int y,Color color);
	void deletePixel(int x, int y);
	void drawLine(Point p1, Point p2, Color c);
	void deleteLine(Point p1, Point p2, Color c);
};

class Line{
public:
	Point P1;
	Point P2;
	Color c;
	Line();
	Line(int x1, int y1, int x2, int y2);
	void line(int x1, int y1, int x2, int y2);
	void setColor(Color color);
	void Draw(FrameBuffer fb);
};

class Polygon{
public:
	Line RectLine[4];
	Color c;

	Polygon();
	Polygon(Point a, Point b, Point c, Point d);

	void setColor(Color color);
	void Draw(FrameBuffer fb);
	
};

class Building{
public:

	Polygon Roof;
	int Height;
	Color c;

	Building();
	Building(Polygon r);
	Building(Polygon r, int h);

	void setRoof(Polygon roof);
	void setHeight(int h);
	void setColor(Color c);

	Polygon getRoof();
	Polygon getLeftSide();
	Polygon getFrontSide();

	void Draw(FrameBuffer fb);
};

class Peta{
public:
	vector<Building> Kota;// urutan mempengaruhi prioritas
	Polygon frame;
	Polygon views;

	Peta();

	void addBuilding(Building build);
	void makeKotaEmpty();
	void moveBuilding(int a, int b);

	void Draw(FrameBuffer fb);
};

#endif