#include "class.h"

int main(){
	Building build;
	Rectangle rect;
	FrameBuffer fb;

	build.SetColor(Color(255,255,255));


	build.Draw(fb);

	return 0;
}