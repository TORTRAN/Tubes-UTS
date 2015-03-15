#ifndef PATTERN_H
#define PATTERN_H

#include "class.h"

class Pattern
{
public:
	virtual Color getColor(Point p) = 0;
};

#endif