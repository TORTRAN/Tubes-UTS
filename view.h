#ifndef VIEW_H
#define VIEW_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include "window.h"

class View{ // View adalah hasil pengambilan gambar dari window
	public:
		// Attr
		Point RectView[2];

		// CTOR
		View();

		// Draw Hasil tangkapan window
		void Draw(Window w);

		// Menggambar ketika P1 dan P2 ada di luar
		void GetThrough(Line L, Window w);
};

#endif