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
	/*
	 * arrPoint berisi kumpulan titik yang membentuk poligon 
	 * Contoh: Ada poligon berbentuk persegi panjang, Isi arrPoint:
	 * arrPoint[0] = (100, 100)
	 * arrPoint[1] = (200, 100)
	 * arrPoint[3] = (200, 300)
	 * arrPoint[4] = (100, 300)
	*/
	static void fill(std::vector <Point> arrPoint, Color color, FrameBuffer &fb);

	/*
	 * arrPoint sama dengan fungsi fill di atas
	 * Pattern diiisi sama pattern
	 * Contoh: 	fill dengan pattern kayu
	 * 			fill(arrPoint, new PatternKayu(), fb)
	*/
	static void fill(std::vector <Point> arrPoint, Pattern * pattern, FrameBuffer &fb);
};
#endif