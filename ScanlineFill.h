#ifndef SCANLINEFILL_H
#define SCANLINEFILL_H
#include <algorithm>
#include <cmath>
#include <vector>

#include "class.h"
#include "Edge.h"
#include "ActiveEdge.h"
class ScanlineFill
{
public:
	static void fill(std::vector <Point> arrPoint, Color color, FrameBuffer &fb);
	
};
#endif