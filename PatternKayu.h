#ifndef PATTERN_KAYU_H
#define PATTERN_KAYU_H
#include "Pattern.h"

class PatternKayu: public Pattern
{
public:
	virtual Color getColor(Point p);
};

#endif