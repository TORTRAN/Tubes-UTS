#ifndef MAP_H
#define MAP_H

#include <vector>
#include "line.h"
#include "base.h"
using namespace std;

class Map{
public:
	// CTOR
	Map();

	// ATTR
	vector<Line> vector;
	Line line;
	
	// Gambar Map nya
	void Draw();
};

#endif
