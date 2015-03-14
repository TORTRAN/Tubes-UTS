#include "map.h"

// Literally Hard Coding

Map::Map(){
	//sumatera
	line.line(10,10,20,10);vectorLine.push_back(line);
	line.line(20,10,25,15);vectorLine.push_back(line);
	line.line(25,15,35,15);vectorLine.push_back(line);
	line.line(35,15,45,30);vectorLine.push_back(line);
	line.line(45,30,55,30);vectorLine.push_back(line);//5
	line.line(55,30,65,40);vectorLine.push_back(line);
	line.line(65,40,70,40);vectorLine.push_back(line);
	line.line(70,40,85,55);vectorLine.push_back(line);
	line.line(85,55,90,55);vectorLine.push_back(line);
	line.line(90,55,115,85);vectorLine.push_back(line);//10
	line.line(115,85,115,95);vectorLine.push_back(line);
	line.line(115,95,100,100);vectorLine.push_back(line);
	line.line(100,100,85,80);vectorLine.push_back(line);
	line.line(85,80,80,80);vectorLine.push_back(line);
	line.line(80,80,65,65);vectorLine.push_back(line);//15
	line.line(65,65,60,65);vectorLine.push_back(line);
	line.line(60,65,45,50);vectorLine.push_back(line);
	line.line(45,50,40,50);vectorLine.push_back(line);
	line.line(40,50,25,30);vectorLine.push_back(line);
	line.line(25,30,20,30);vectorLine.push_back(line);
	line.line(20,30,10,10);vectorLine.push_back(line);
	//bangka
	line.line(95,55,105,55);vectorLine.push_back(line);
	line.line(105,55,115,70);vectorLine.push_back(line);
	line.line(115,70,105,70);vectorLine.push_back(line);
	line.line(105,70,95,55);vectorLine.push_back(line);
	//belitung
	line.line(115,65,125,65);vectorLine.push_back(line);
	line.line(125,65,125,75);vectorLine.push_back(line);
	line.line(125,75,115,75);vectorLine.push_back(line);
	line.line(115,75,115,65);vectorLine.push_back(line);
	//jawa
	line.line(125,95,140,95);vectorLine.push_back(line);
	line.line(140,95,140,100);vectorLine.push_back(line);
	line.line(140,100,155,100);vectorLine.push_back(line);
	line.line(155,100,155,105);vectorLine.push_back(line);
	line.line(155,105,175,105);vectorLine.push_back(line);//5
	line.line(175,105,175,95);vectorLine.push_back(line);
	line.line(175,95,195,95);vectorLine.push_back(line);
	line.line(195,95,195,105);vectorLine.push_back(line);
	line.line(195,105,215,105);vectorLine.push_back(line);
	line.line(215,105,215,115);vectorLine.push_back(line);//10
	line.line(215,115,225,115);vectorLine.push_back(line);
	line.line(225,115,225,125);vectorLine.push_back(line);
	line.line(225,125,185,125);vectorLine.push_back(line);
	line.line(185,125,185,115);vectorLine.push_back(line);
	line.line(185,115,175,115);vectorLine.push_back(line);//15
	line.line(175,115,175,120);vectorLine.push_back(line);
	line.line(175,120,155,120);vectorLine.push_back(line);
	line.line(155,120,155,115);vectorLine.push_back(line);
	line.line(155,115,135,115);vectorLine.push_back(line);
	line.line(135,115,135,105);vectorLine.push_back(line);//20
	line.line(135,105,125,105);vectorLine.push_back(line);
	line.line(125,105,125,95);vectorLine.push_back(line);
	//kalimantan
	line.line(145,25,165,27);vectorLine.push_back(line);
	line.line(165,27,180,20);vectorLine.push_back(line);
	line.line(180,20,200,5);vectorLine.push_back(line);
	line.line(200,5,220,5);vectorLine.push_back(line);
	line.line(220,5,225,10);vectorLine.push_back(line);
	line.line(225,10,225,15);vectorLine.push_back(line);
	line.line(225,15,235,23);vectorLine.push_back(line);
	line.line(235,23,248,28);vectorLine.push_back(line);
	line.line(248,28,243,25);vectorLine.push_back(line);
	line.line(243,25,213,35);vectorLine.push_back(line);
	line.line(213,35,223,40);vectorLine.push_back(line);
	line.line(223,40,225,50);vectorLine.push_back(line);
	line.line(225,50,215,65);vectorLine.push_back(line);
	line.line(215,65,210,65);vectorLine.push_back(line);
	line.line(210,65,210,72);vectorLine.push_back(line);
	line.line(210,72,200,72);vectorLine.push_back(line);
	line.line(200,72,200,65);vectorLine.push_back(line);
	line.line(200,65,185,65);vectorLine.push_back(line);
	line.line(185,65,185,71);vectorLine.push_back(line);
	line.line(185,71,175,71);vectorLine.push_back(line);
	line.line(175,71,175,67);vectorLine.push_back(line);
	line.line(175,67,165,67);vectorLine.push_back(line);
	line.line(165,67,155,60);vectorLine.push_back(line);
	line.line(155,60,155,45);vectorLine.push_back(line);
	line.line(155,45,148,40);vectorLine.push_back(line);
	line.line(148,40,143,30);vectorLine.push_back(line);
	line.line(143,30,145,25);vectorLine.push_back(line);
	//sulawesi
	line.line(260,24,268,24);vectorLine.push_back(line);
	line.line(268,24,268,18);vectorLine.push_back(line);
	line.line(268,18,275,18);vectorLine.push_back(line);
	line.line(275,18,275,24);vectorLine.push_back(line);
	line.line(275,24,305,24);vectorLine.push_back(line);
	line.line(305,24,305,14);vectorLine.push_back(line);
	line.line(305,14,315,14);vectorLine.push_back(line);
	line.line(315,14,315,19);vectorLine.push_back(line);
	line.line(315,19,312,19);vectorLine.push_back(line);
	line.line(312,19,312,32);vectorLine.push_back(line);
	line.line(312,32,290,34);vectorLine.push_back(line);
	line.line(290,34,265,34);vectorLine.push_back(line);
	line.line(265,34,265,50);vectorLine.push_back(line);
	line.line(265,50,275,52);vectorLine.push_back(line);
	line.line(275,52,277,45);vectorLine.push_back(line);
	line.line(277,45,292,43);vectorLine.push_back(line);
	line.line(292,43,292,40);vectorLine.push_back(line);
	line.line(292,40,300,40);vectorLine.push_back(line);
	line.line(300,40,300,50);vectorLine.push_back(line);
	line.line(300,50,292,50);vectorLine.push_back(line);
	line.line(292,50,292,55);vectorLine.push_back(line);
	line.line(292,55,275,57);vectorLine.push_back(line);
	line.line(275,57,275,64);vectorLine.push_back(line);
	line.line(275,64,280,64);vectorLine.push_back(line);
	line.line(280,64,288,62);vectorLine.push_back(line);
	line.line(288,62,298,81);vectorLine.push_back(line);
	line.line(298,81,289,89);vectorLine.push_back(line);
	line.line(289,89,280,80);vectorLine.push_back(line);
	line.line(280,80,275,78);vectorLine.push_back(line);
	line.line(275,78,275,70);vectorLine.push_back(line);
	line.line(275,70,270,70);vectorLine.push_back(line);
	line.line(270,70,270,95);vectorLine.push_back(line);
	line.line(270,95,258,95);vectorLine.push_back(line);
	line.line(258,95,258,78);vectorLine.push_back(line);
	line.line(258,78,260,78);vectorLine.push_back(line);
	line.line(260,78,260,55);vectorLine.push_back(line);
	line.line(260,55,253,54);vectorLine.push_back(line);
	line.line(253,54,253,43);vectorLine.push_back(line);
	line.line(253,43,260,43);vectorLine.push_back(line);
	line.line(260,43,260,24);vectorLine.push_back(line);
	//bali
	line.line(232,115,242,115);vectorLine.push_back(line);
	line.line(242,115,242,125);vectorLine.push_back(line);
	line.line(242,125,232,125);vectorLine.push_back(line);
	line.line(232,125,232,115);vectorLine.push_back(line);
	//lombok
	line.line(247,115,257,115);vectorLine.push_back(line);
	line.line(257,115,257,125);vectorLine.push_back(line);
	line.line(257,125,247,125);vectorLine.push_back(line);
	line.line(247,125,247,115);vectorLine.push_back(line);
	//sumba
	line.line(263,115,274,113);vectorLine.push_back(line);
	line.line(274,113,274,108);vectorLine.push_back(line);
	line.line(274,108,286,108);vectorLine.push_back(line);
	line.line(286,108,286,120);vectorLine.push_back(line);
	line.line(286,120,274,120);vectorLine.push_back(line);
	line.line(274,120,274,124);vectorLine.push_back(line);
	line.line(274,124,262,125);vectorLine.push_back(line);
	line.line(262,125,263,115);vectorLine.push_back(line);
	//maluku1
	line.line(335,10,342,10);vectorLine.push_back(line);
	line.line(342,10,342,24);vectorLine.push_back(line);
	line.line(342,24,350,13);vectorLine.push_back(line);
	line.line(350,13,355,13);vectorLine.push_back(line);
	line.line(355,13,345,30);vectorLine.push_back(line);
	line.line(345,30,352,30);vectorLine.push_back(line);
	line.line(352,30,352,33);vectorLine.push_back(line);
	line.line(352,33,340,33);vectorLine.push_back(line);
	line.line(340,33,340,45);vectorLine.push_back(line);
	line.line(340,45,335,45);vectorLine.push_back(line);
	line.line(335,45,335,10);vectorLine.push_back(line);
	//maluku2
	line.line(315,55,329,55);vectorLine.push_back(line);
	line.line(329,55,330,62);vectorLine.push_back(line);
	line.line(330,62,317,62);vectorLine.push_back(line);
	line.line(317,62,315,55);vectorLine.push_back(line);
	//maluku3
	line.line(328,66,340,66);vectorLine.push_back(line);
	line.line(340,66,340,77);vectorLine.push_back(line);
	line.line(340,77,329,77);vectorLine.push_back(line);
	line.line(329,77,328,66);vectorLine.push_back(line);
	//maluku4
	line.line(344,62,374,62);vectorLine.push_back(line);
	line.line(374,62,374,71);vectorLine.push_back(line);
	line.line(374,71,345,71);vectorLine.push_back(line);
	line.line(345,71,341,62);vectorLine.push_back(line);
	//papua
	line.line(380,38,387,38);vectorLine.push_back(line);
	line.line(387,38,387,28);vectorLine.push_back(line);
	line.line(387,28,398,28);vectorLine.push_back(line);
	line.line(398,28,398,33);vectorLine.push_back(line);
	line.line(398,33,410,35);vectorLine.push_back(line);
	line.line(410,35,410,65);vectorLine.push_back(line);
	line.line(410,65,421,65);vectorLine.push_back(line);
	line.line(421,65,432,50);vectorLine.push_back(line);
	line.line(432,50,432,38);vectorLine.push_back(line);
	line.line(432,38,444,37);vectorLine.push_back(line);
	line.line(444,37,460,39);vectorLine.push_back(line);
	line.line(460,39,460,118);vectorLine.push_back(line);
	line.line(460,118,443,119);vectorLine.push_back(line);
	line.line(443,119,439,110);vectorLine.push_back(line);
	line.line(439,110,435,90);vectorLine.push_back(line);
	line.line(435,90,426,87);vectorLine.push_back(line);
	line.line(426,87,415,87);vectorLine.push_back(line);
	line.line(415,87,415,76);vectorLine.push_back(line);
	line.line(415,76,409,75);vectorLine.push_back(line);
	line.line(409,75,409,71);vectorLine.push_back(line);
	line.line(409,71,403,71);vectorLine.push_back(line);
	line.line(403,71,403,75);vectorLine.push_back(line);
	line.line(403,75,391,75);vectorLine.push_back(line);
	line.line(391,75,391,68);vectorLine.push_back(line);
	line.line(391,68,384,68);vectorLine.push_back(line);
	line.line(384,68,384,62);vectorLine.push_back(line);
	line.line(384,62,403,62);vectorLine.push_back(line);
	line.line(403,62,403,53);vectorLine.push_back(line);
	line.line(403,53,388,53);vectorLine.push_back(line);
	line.line(388,53,388,42);vectorLine.push_back(line);
	line.line(388,42,380,42);vectorLine.push_back(line);
	line.line(380,42,380,38);vectorLine.push_back(line);
}
		
void Map::Draw(){
	for(int i = 0 ; i < vectorLine.size() ; i++)
		vectorLine[i].draw(fb);
}
