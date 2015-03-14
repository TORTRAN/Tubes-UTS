#ifndef WINDOW_H
#define WINDOW_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include "map.h"

class Window{ // Window adalah clipper yang ada di peta besar
	private:

	public:
		// Attr
		Point location;
		Point RectWindow[2]; // Rect[0] di kiri atas, Rect[1] di kanan bawah
		int size;

		// CTOR dan kawan-kawan
		Window();
		void Draw();
		void Delete();
		void GetContent(Map m);

		// Updater
		void UpdateWindow();

		// Mover
		void MoveUp();
		void MoveLeft();
		void MoveDown();
		void MoveRight(); 

		// Zoom
		void ZoomOut();
		void ZoomIn();

		// List garis di dalam window
		std::vector<Line> LineInside;	
};

#endif