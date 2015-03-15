#include "class.h"

int main(){
	Peta peta;
	FrameBuffer fb;

	for(int i = 0; i<5 ; i++){
		Polygon pol;

		//move
		for(int j = 0 ; j<4 ; j++){
			int x;
			if(i % 2 == 0)
				x= (i+1)*30+20;
			else
				x= (i+1)*30;
			
			pol.RectLine[j].P1.x+=x;
			pol.RectLine[j].P1.y+=x;
			pol.RectLine[j].P2.x+=x;
			pol.RectLine[j].P2.y+=x;
		}

		Building build(pol, (i+2)*20);
		peta.addBuilding(build);
	}


	peta.Draw(fb);

	return 0;
}