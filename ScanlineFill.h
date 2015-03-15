#ifndef SCANLINEFILL_H
#define SCANLINEFILL_H
#include <algorithm>
#include <cmath>
#include <vector>

#include "class.h"
#include "Edge.h"
#include "ActiveEdge.h"
#include "Pattern.h"

class ScanlineFill
{
public:
	static void fill(std::vector <Point> arrPoint, Color color, FrameBuffer &fb);
	static void fill(std::vector <Point> arrPoint, Pattern * pattern, FrameBuffer &fb);
};
#endif