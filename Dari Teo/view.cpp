#include "view.h"

using namespace std;

View::View(){
	RectView[0].x = 400;
	RectView[1].x = 600;
	RectView[0].y = 200;
	RectView[1].y = 400;
}

void View::Draw(Window w){
	drawLine(RectView[0].x,RectView[0].y,RectView[1].x,RectView[0].y);
	drawLine(RectView[1].x,RectView[0].y,RectView[1].x,RectView[1].y);
	drawLine(RectView[1].x,RectView[1].y,RectView[0].x,RectView[1].y);
	drawLine(RectView[0].x,RectView[1].y,RectView[0].x,RectView[0].y);

	for (int i=0; i<w.LineInside.size(); i++){
		if ((w.LineInside[i].P1.x >= w.RectWindow[0].x && w.LineInside[i].P1.x <= w.RectWindow[1].x) && (w.LineInside[i].P1.y >= w.RectWindow[0].y && w.LineInside[i].P1.y <= w.RectWindow[1].y)){
			if ((w.LineInside[i].P2.x >= w.RectWindow[0].x && w.LineInside[i].P2.x <= w.RectWindow[1].x) && (w.LineInside[i].P2.y >= w.RectWindow[0].y && w.LineInside[i].P2.y <= w.RectWindow[1].y)){
				// P1, P2 di dalam
				Point Pt1,Pt2;
				Pt1.x = (w.LineInside[i].P1.x - w.RectWindow[0].x) * ((RectView[1].x - RectView[0].x) / (w.RectWindow[1].x - w.RectWindow[0].x)) + 400;
				Pt1.y = (w.LineInside[i].P1.y - w.RectWindow[0].y) * ((RectView[1].y - RectView[0].y) / (w.RectWindow[1].y - w.RectWindow[0].y)) + 200;
	
				Pt2.x = (w.LineInside[i].P2.x - w.RectWindow[0].x) * ((RectView[1].x - RectView[0].x) / (w.RectWindow[1].x - w.RectWindow[0].x)) + 400;
				Pt2.y = (w.LineInside[i].P2.y - w.RectWindow[0].y) * ((RectView[1].y - RectView[0].y) / (w.RectWindow[1].y - w.RectWindow[0].y)) + 200;
				drawLine(Pt1.x,Pt1.y,Pt2.x,Pt2.y);
			}
			else{
				// P1 di dalam, P2 di luar
				Point Pt1,Pt2;
				Pt1.x = (w.LineInside[i].P1.x - w.RectWindow[0].x) * ((RectView[1].x - RectView[0].x) / (w.RectWindow[1].x - w.RectWindow[0].x)) + 400;
				Pt1.y = (w.LineInside[i].P1.y - w.RectWindow[0].y) * ((RectView[1].y - RectView[0].y) / (w.RectWindow[1].y - w.RectWindow[0].y)) + 200;
	
				Pt2.x = (w.LineInside[i].P2.x - w.RectWindow[0].x) * ((RectView[1].x - RectView[0].x) / (w.RectWindow[1].x - w.RectWindow[0].x)) + 400;
				Pt2.y = (w.LineInside[i].P2.y - w.RectWindow[0].y) * ((RectView[1].y - RectView[0].y) / (w.RectWindow[1].y - w.RectWindow[0].y)) + 200;

				Line linetemp(Pt1.x,Pt1.y,Pt2.x,Pt2.y);

				int index2 = w.LineInside[i].P2.getIndex(w.RectWindow[0], w.RectWindow[1]);
				// Kiri
				if (index2&0x1){
					int tempx = 400;
					int tempy = linetemp.getY(tempx);
					drawLine(Pt1.x,Pt1.y,tempx,tempy);
				}
				// Kanan
				else if (index2&0x2){
					int tempx = 600;
					int tempy = linetemp.getY(tempx);
					drawLine(Pt1.x,Pt1.y,tempx,tempy);
				}
				// Bawah
				else if (index2&0x4){
					int tempy = 400;
					int tempx = linetemp.getX(tempy);
					drawLine(Pt1.x,Pt1.y,tempx,tempy);
				}
				// Atas
				else if (index2&0x8){
					int tempy = 200;
					int tempx = linetemp.getX(tempy);
					drawLine(Pt1.x,Pt1.y,tempx,tempy);
				}
			}
		}
		else{
			if ((w.LineInside[i].P2.x >= w.RectWindow[0].x && w.LineInside[i].P2.x <= w.RectWindow[1].x) && (w.LineInside[i].P2.y >= w.RectWindow[0].y && w.LineInside[i].P2.y <= w.RectWindow[1].y)){	
				// P1 di luar, P2 di dalam
				Point Pt1,Pt2;
				Pt1.x = (w.LineInside[i].P1.x - w.RectWindow[0].x) * ((RectView[1].x - RectView[0].x) / (w.RectWindow[1].x - w.RectWindow[0].x)) + 400;
				Pt1.y = (w.LineInside[i].P1.y - w.RectWindow[0].y) * ((RectView[1].y - RectView[0].y) / (w.RectWindow[1].y - w.RectWindow[0].y)) + 200;
	
				Pt2.x = (w.LineInside[i].P2.x - w.RectWindow[0].x) * ((RectView[1].x - RectView[0].x) / (w.RectWindow[1].x - w.RectWindow[0].x)) + 400;
				Pt2.y = (w.LineInside[i].P2.y - w.RectWindow[0].y) * ((RectView[1].y - RectView[0].y) / (w.RectWindow[1].y - w.RectWindow[0].y)) + 200;

				Line linetemp(Pt1.x,Pt1.y,Pt2.x,Pt2.y);

				int index2 = w.LineInside[i].P1.getIndex(w.RectWindow[0], w.RectWindow[1]);
				// Kiri
				if (index2&0x1){
					int tempx = 400;
					int tempy = linetemp.getY(tempx);
					drawLine(Pt1.x,Pt1.y,tempx,tempy);
				}
				// Kanan
				else if (index2&0x2){
					int tempx = 600;
					int tempy = linetemp.getY(tempx);
					drawLine(Pt1.x,Pt1.y,tempx,tempy);
				}
				// Bawah
				else if (index2&0x4){
					int tempy = 400;
					int tempx = linetemp.getX(tempy);
					drawLine(Pt1.x,Pt1.y,tempx,tempy);
				}
				// Atas
				else if (index2&0x8){
					int tempy = 200;
					int tempx = linetemp.getX(tempy);
					drawLine(Pt1.x,Pt1.y,tempx,tempy);
				}
			}
			else{
				// P1 di luar, P2 di luar, ada garis di dalam
				GetThrough(w.LineInside[i],w);
			}
		}
	}
}

void View::GetThrough(Line L, Window w){
	bool doneP1 = false;
	bool doneP2 = false;
	while (!(doneP1 && doneP2)){
		int indexP1 = L.P1.getIndex(w.RectWindow[0], w.RectWindow[1]);
		int indexP2 = L.P2.getIndex(w.RectWindow[0], w.RectWindow[1]);  
		// P1
		if ((indexP1&0x1) && !doneP1){ // Garis kiri
			int x = w.RectWindow[0].x;
			int y = L.getY(x);
			indexP1 = indexP1 - 1;
			L.P1.x = x;
			L.P1.y = y;
			if (L.P1.y >= w.RectWindow[0].y && L.P1.y <= w.RectWindow[1].y){ // Sampai ke RectWindow
				doneP1 = true;
			}
		}
		else if ((indexP1&0x2) && !doneP1){ // Garis kanan
			int x = w.RectWindow[1].x;
			int y = L.getY(x);
			indexP1 = indexP1 - 2;
			L.P1.x = x;
			L.P1.y = y;
			if (L.P1.y >= w.RectWindow[0].y && L.P1.y <= w.RectWindow[1].y){ // Sampai ke RectWindow
				doneP1 = true;
			}
		}
		else if ((indexP1&0x4) && !doneP1){ // Garis bawah
			int y = w.RectWindow[1].y;
			int x = L.getX(y);
			indexP1 = indexP1 - 4;
			L.P1.x = x;
			L.P1.y = y;
			if (L.P1.x >= w.RectWindow[0].x && L.P1.x <= w.RectWindow[1].x){ // Sampai ke RectWindow
				doneP1 = true;
			}
		}
		else if ((indexP1&0x8) && !doneP1){ // Garis atas
			int y = w.RectWindow[0].y;
			int x = L.getX(y);
			indexP1 = indexP1 - 8;
			L.P1.x = x;
			L.P1.y = y;
			if (L.P1.x >= w.RectWindow[0].x && L.P1.x <= w.RectWindow[1].x){ // Sampai ke RectWindow
				doneP1 = true;
			}
		}

		//P2
		if ((indexP2&0x1) && !doneP2){ // Garis kiri
			int x = w.RectWindow[0].x;
			int y = L.getY(x);
			indexP2 = indexP2 - 1;
			L.P2.x = x;
			L.P2.y = y;
			if (L.P2.y >= w.RectWindow[0].y && L.P2.y <= w.RectWindow[1].y){ // Sampai ke RectWindow
				doneP2 = true;
			}
		}
		else if ((indexP2&0x2) && !doneP2){ // Garis kanan
			int x = w.RectWindow[1].x;
			int y = L.getY(x);
			indexP2 = indexP2 - 2;
			L.P2.x = x;
			L.P2.y = y;
			if (L.P2.y >= w.RectWindow[0].y && L.P2.y <= w.RectWindow[1].y){ // Sampai ke RectWindow
				doneP2 = true;
			}
		}
		else if ((indexP2&0x4) && !doneP2){ // Garis bawah
			int y = w.RectWindow[1].y;
			int x = L.getX(y);
			indexP2 = indexP2 - 4;
			L.P2.x = x;
			L.P2.y = y;
			if (L.P2.x >= w.RectWindow[0].x && L.P2.x <= w.RectWindow[1].x){ // Sampai ke RectWindow
				doneP2 = true;
			}
		}
		else if ((indexP2&0x8) && !doneP2){ // Garis atas
			int y = w.RectWindow[0].y;
			int x = L.getX(y);
			indexP2 = indexP2 - 8;
			L.P2.x = x;
			L.P2.y = y;
			if (L.P2.x >= w.RectWindow[0].x && L.P2.x <= w.RectWindow[1].x){ // Sampai ke RectWindow
				doneP2 = true;
			}
		}
	}
	// Gambar Garis yang sudah di dalamn ke dalam View
	Point Pt1, Pt2;
	Pt1.x = (L.P1.x - w.RectWindow[0].x) * ((RectView[1].x - RectView[0].x) / (w.RectWindow[1].x - w.RectWindow[0].x)) + 400;
	Pt1.y = (L.P1.y - w.RectWindow[0].y) * ((RectView[1].y - RectView[0].y) / (w.RectWindow[1].y - w.RectWindow[0].y)) + 200;

	Pt2.x = (L.P2.x - w.RectWindow[0].x) * ((RectView[1].x - RectView[0].x) / (w.RectWindow[1].x - w.RectWindow[0].x)) + 400;	
	Pt2.y = (L.P2.y - w.RectWindow[0].y) * ((RectView[1].y - RectView[0].y) / (w.RectWindow[1].y - w.RectWindow[0].y)) + 200;
	drawLine(Pt1.x,Pt1.y,Pt2.x,Pt2.y);
}