#ifndef MAP_H
#define MAP_H

#include <vector>
#include "line.h"
#include "base.h"
using namespace std;

extern FrameBuffer fb;

class Map{ // Map berisi semua gambar yang ada
public:
	// CTOR
	Map();

	// ATTR
	vector<Line> vectorLine;
	Line line;
	
	// Gambar Map nya
	void Draw();
};

#endif
