#include "class.h"

Color::Color(){
		Red=255;
		Green=255;
		Blue=255;
	}
	
Color::Color(int red, int green, int blue){
	if(red<=255 && red>=0 && green<=255 && green>=0 && blue>=0&& blue<=255){
		
		Red=red;
		Green=green;
		Blue=blue;
	}
	else{
		Red=0;
		Green=0;
		Blue=0;
	}
}
	
void Color::setRed(int r){
	if(r<=0&&r>=255)Red=r;
}

void Color::setGreen(int g){
	if(g<=0&&g>=255)Green=g;
}

void Color::setBlue(int b){
	if(b<=0&&b>=255)Blue=b;
}

Point::Point(){
	x = 0;
	y = 0;
}

Point::Point(int x1, int y1){
	x = x1;
	y = y1;
}

Polygon::Polygon():c(255,0,0){
	RectLine[0]=Line(10,10,20,20);
	RectLine[1]=Line(20,20,40,20);
	RectLine[2]=Line(40,20,30,10);
	RectLine[3]=Line(30,10,10,10);
}

Polygon::Polygon(Point a, Point b, Point c, Point d):c(255,0,0){
	RectLine[0]=Line(a.x, a.y, b.x, b.y);
	RectLine[1]=Line(b.x, b.y, c.x, c.y);
	RectLine[2]=Line(c.x, c.y, d.x, d.y);
	RectLine[3]=Line(d.x, d.y, a.x, a.y);
}

void Polygon::setColor(Color color){
	c=color;
	for(int i = 0; i<4 ; i++){
		RectLine[i].c=c;
	}
}

void Polygon::Draw(FrameBuffer fb){
	for(int i=0;i<4;i++){
		RectLine[i].Draw(fb);
	}
}

Building::Building():c(255,0,0){
	Roof.RectLine[0]=Line(10,10,100,100);
	Roof.RectLine[1]=Line(100,100,300,100);
	Roof.RectLine[2]=Line(300,100,200,10);
	Roof.RectLine[3]=Line(200,10,10,10);

	Height = 600;
}

Building::Building(Polygon r):c(255,0,0){
	Roof=r;
	Height=100;
}

Building::Building(Polygon r, int h):c(255,0,0){
	Roof=r;
	Height=h;
}

Polygon Building::getRoof(){
	return Roof;
}

Polygon Building::getLeftSide(){
	Polygon rect;
	rect.RectLine[0]=Roof.RectLine[0];
	rect.RectLine[1]=Line(Roof.RectLine[0].P1.x,Roof.RectLine[0].P1.y,Roof.RectLine[0].P1.x,Roof.RectLine[0].P1.y+Height);
	rect.RectLine[2]=Line(Roof.RectLine[0].P2.x,Roof.RectLine[0].P2.y,Roof.RectLine[0].P2.x,Roof.RectLine[0].P2.y+Height);
	rect.RectLine[3]=Line(Roof.RectLine[0].P2.x,Roof.RectLine[0].P2.y+Height,Roof.RectLine[0].P1.x,Roof.RectLine[0].P1.y+Height);

	return rect;
}

Polygon Building::getFrontSide(){
	Polygon rect;
	rect.RectLine[0]=Roof.RectLine[1];
	rect.RectLine[1]=Line(Roof.RectLine[1].P1.x,Roof.RectLine[1].P1.y,Roof.RectLine[1].P1.x,Roof.RectLine[1].P1.y+Height);
	rect.RectLine[2]=Line(Roof.RectLine[1].P2.x,Roof.RectLine[1].P2.y,Roof.RectLine[1].P2.x,Roof.RectLine[1].P2.y+Height);
	rect.RectLine[3]=Line(Roof.RectLine[1].P2.x,Roof.RectLine[1].P2.y+Height,Roof.RectLine[1].P1.x,Roof.RectLine[1].P1.y+Height);

	return rect;
}

void Building::setRoof(Polygon r){
	Roof=r;
}

void Building::setHeight(int h){
	Height=h;
}

void Building::setColor(Color color){
	c=color;
	Roof.setColor(color);
}

void Building::Draw(FrameBuffer fb){
	Line land[5];
	Polygon rect[2];
	int i;
	
	//set land and roof to land
	rect[0]=getLeftSide();
	rect[1]=getFrontSide();

	land[0]=rect[0].RectLine[1];
	land[1]=rect[0].RectLine[2];
	land[2]=rect[0].RectLine[3];
	land[3]=rect[1].RectLine[2];
	land[4]=rect[1].RectLine[3];

	//draw roof
	Roof.Draw(fb);

	//draw from roof to land and land
	for(i=0;i<5;i++){
		land[i].setColor(c);
		land[i].Draw(fb);
	}
	
}

FrameBuffer::FrameBuffer(){
	/* open the file for reading and writing */
	fbfd = open("/dev/fb0",O_RDWR);
	if (!fbfd) {
		printf("Error: cannot open framebuffer device.\n");
		exit(1);
	}
	//printf ("The framebuffer device was opened successfully.\n");

	/* get the fixed screen information */
	if (ioctl (fbfd, FBIOGET_FSCREENINFO, &finfo)) {
		printf("Error reading fixed information.\n");
		exit(2);
	}

	/* get variable screen information */
	if (ioctl (fbfd, FBIOGET_VSCREENINFO, &vinfo)) {
		printf("Error reading variable information.\n");
		exit(3);
	}
	/* map the device to memory */
	fbp = (char*)mmap(0, finfo.smem_len, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0);
	screensize = 0;

	if ((int)fbp == -1) {
		printf ("Error: failed to map framebuffer device to memory.\n");
		exit(4);
	}
	//printf ("Framebuffer device was mapped to memory successfully.\n");
}

void FrameBuffer::setPixel(int x, int y,Color color){
    int location = (x+vinfo.xoffset) * (vinfo.bits_per_pixel/8) + (y+vinfo.yoffset) * finfo.line_length;
    *(fbp + location) = color.Blue; // Some blue 
    *(fbp + location + 1) = color.Green; // A little green 
    *(fbp + location + 2) = color.Red; // A lot of red
    *(fbp + location + 3) = 0; // No transparency 
}

void FrameBuffer::deletePixel(int x, int y){
	int location = (x+vinfo.xoffset) * (vinfo.bits_per_pixel/8) + (y+vinfo.yoffset) * finfo.line_length;
    *(fbp + location) = 0; // Some blue 
    *(fbp + location + 1) = 0; // A little green 
    *(fbp + location + 2) = 0; // A lot of red
    *(fbp + location + 3) = 0; // No transparency 
}

void FrameBuffer::drawLine(Point P1,Point P2,Color c){
	int dx = abs (P2.x-P1.x), sx = P1.x<P2.x ? 1 : -1;
	int dy = - abs (P2.y-P1.y), sy = P1.y<P2.y ? 1 : -1;
	int error = dx + dy, e2;

	for (;;){
		setPixel(P1.x,P1.y,c);
		if (P1.x==P2.x && P1.y==P2.y) break;
		e2 = 2 * error;
		if (e2 >= dy) {error += dy; P1.x += sx;}
		if (e2 <= dx) {error += dx; P1.y += sy;}
	}
}

Peta::Peta():frame(Point(10,10),Point(10,400),Point(1356,400),Point(1356,10)){

	Building build;
	Polygon new_roof;
	Polygon new_views(Point(1026,420),Point(1026,750),Point(1356,750),Point(1356,420));
	views = new_views;

	new_roof = Polygon(Point(500,140),Point(550,190),Point(640,160),Point(580,110));
	build.Roof=new_roof;
	build.setHeight(260);
	addBuilding(build);

	new_roof = Polygon(Point(580,220),Point(640,270),Point(720,240),Point(660,190));
	build.Roof=new_roof;
	build.setHeight(150);
	addBuilding(build);

	new_roof = Polygon(Point(660,290),Point(720,340),Point(810,310),Point(740,260));
	build.Roof=new_roof;
	build.setHeight(50);
	addBuilding(build);

	new_roof = Polygon(Point(450,300),Point(500,350),Point(580,320),Point(520,270));
	build.Roof=new_roof;
	build.setHeight(50);
	addBuilding(build);

	new_roof = Polygon(Point(520,60),Point(580,110),Point(660,80),Point(600,30));
	build.Roof=new_roof;
	build.setHeight(260);
	addBuilding(build);
	
	new_roof = Polygon(Point(190,50),Point(310,150),Point(390,120),Point(270,20));
	build.Roof=new_roof;
	build.setHeight(260);
	addBuilding(build);
	
	new_roof = Polygon(Point(310,250),Point(370,300),Point(450,270),Point(390,220));
	build.Roof=new_roof;
	build.setHeight(160);
	addBuilding(build);
}

void Peta::moveBuilding(int a, int b){
	Building build=Kota[a];
	Kota[a]=Kota[b];
	Kota[b]=build;
}

void Peta::addBuilding(Building build){
	Kota.push_back(build);
}

void Peta::makeKotaEmpty(){
	Kota.clear();
}

void Peta::Draw(FrameBuffer fb){
	for(int i = 0; i <= Kota.size()-1 ; i++){
		Kota[i].Draw(fb);
	}

	frame.Draw(fb);
	views.Draw(fb);
}

Line::Line():c(255,0,0){
	P1.x = 0;
	P1.y = 0;
	P2.x = 0;
	P2.y = 0;
}
Line::Line(int x1, int y1, int x2, int y2):c(255,0,0){
	P1.x = x1;
	P1.y = y1;
	P2.x = x2;
	P2.y = y2;
}
void Line::line(int x1, int y1, int x2, int y2){
	P1.x = x1;
	P1.y = y1;
	P2.x = x2;
	P2.y = y2;
}
void Line::setColor(Color color){
	c=color;
}
void Line::Draw(FrameBuffer FB){
	int dx = abs (P2.x-P1.x), sx = P1.x<P2.x	? 1 : -1;
	int dy = - abs (P2.y-P1.y), sy = P1.y<P2.y ? 1 : -1;
	int error = dx + dy, e2;
	for (;;){
		FB.setPixel(P1.x,P1.y,c);
		if (P1.x==P2.x && P1.y==P2.y) break;
		e2 = 2 * error;
		if (e2 >= dy) {error += dy; P1.x += sx;}
		if (e2 <= dx) {error += dx; P1.y += sy;}
	}
}
