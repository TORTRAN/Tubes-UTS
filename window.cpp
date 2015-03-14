#include "window.h"
using namespace std;

Window::Window(){
	location.x = 50;
	location.y = 50;
	size = 20;
	RectWindow[0].x = location.x - size;
	RectWindow[0].y = location.y - size;

	RectWindow[1].x = location.x + size;
	RectWindow[1].y = location.y + size;
}

Window::UpdateWindow(){
	RectWindow[0].x = location.x - size;
	RectWindow[0].y = location.y - size;

	RectWindow[1].x = location.x + size;
	RectWindow[1].y = location.y + size;
}

void Window::MoveUp(){
	location.y -= 2;
	UpdateWindow();
}

void Window::MoveLeft(){
	location.x -= 2;
	UpdateWindow();
}

void Window::MoveDown(){
	location.y += 2;
	UpdateWindow();
}

void Window::MoveRight(){
	location.x += 2;
	UpdateWindow();
}

void Window::ZoomOut(){
	size += 2;
	UpdateWindow();
}

void Window::ZoomIn(){
	size -= 2;
	UpdateWindow();
}

void Window::Draw(){
	drawLine(RectWindow[0].x,RectWindow[0].y,RectWindow[1].x,RectWindow[0].y);
	drawLine(RectWindow[1].x,RectWindow[0].y,RectWindow[1].x,RectWindow[1].y);
	drawLine(RectWindow[1].x,RectWindow[1].y,RectWindow[0].x,RectWindow[1].y);
	drawLine(RectWindow[0].x,RectWindow[1].y,RectWindow[0].x,RectWindow[0].y);
}

void Window::Draw(){
	deleteLine(RectWindow[0].x,RectWindow[0].y,RectWindow[1].x,RectWindow[0].y);
	deleteLine(RectWindow[1].x,RectWindow[0].y,RectWindow[1].x,RectWindow[1].y);
	deleteLine(RectWindow[1].x,RectWindow[1].y,RectWindow[0].x,RectWindow[1].y);
	deleteLine(RectWindow[0].x,RectWindow[1].y,RectWindow[0].x,RectWindow[0].y);
}

void Window::GetContent(Map m){
	for (int i=0; i<m.size; i++){
		// Index Cohen
		int index1 = m.vector[i].P1.getIndex(RectWindow[0], RectWindow[1]);
		int index2 = m.vector[i].P2.getIndex(RectWindow[0], RectWindow[1]);

		if ((m.vector[i].P1.x >= RectWindow[0].x && m.vector[i].P1.x <= RectWindow[1].x) && (m.vector[i].P1.y >= RectWindow[0].y && m.vector[i].P1.y <= RectWindow[1].y)){
			// P1 di dalam
			LineInside.push_back(m.vector[i]);
		}
		else if ((m.vector[i].P2.x >= RectWindow[0].x && m.vector[i].P2.x <= RectWindow[1].x) && (m.vector[i].P2.y >= RectWindow[0].y && m.vector[i].P2.y <= RectWindow[1].y)){
			// P2 di dalam, P1 di luar
			LineInside.push_back(m.vector[i]);
		}
		else if (!(index1 & index2)){
			// P2 di luar, P1 di luar
			LineInside.push_back(m.vector[i]);
		}
	}
}