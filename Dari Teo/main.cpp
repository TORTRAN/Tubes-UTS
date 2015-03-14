#include "base.h"
#include "line.h"
#include "map.h"
#include "window.h"
#include "view.h"

static struct termios old, New;
FrameBuffer fb;

//input without enter
void initTermios(int echo) 
{
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  New = old; /* make new settings same as old settings */
  New.c_lflag &= ~ICANON; /* disable buffered i/o */
  New.c_lflag &= echo ? ECHO : ~ECHO; /* set echo mode */
  tcsetattr(0, TCSANOW, &New); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void) 
{
  tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo) 
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void) 
{
  return getch_(0);
}

/* Read 1 character with echo */
char getche(void) 
{
  return getch_(1);
}

int main(){
  Map map;
  Window window;
	
  char temp = 'm';
	while(temp != 'q'){
	  View view;
    map.Draw();
    window.Draw();

    // Get input from keyboard
    temp = getche();
    switch(temp){
      case 'w' : window.MoveUp(); break;
      case 'a' : window.MoveLeft(); break;
      case 's' : window.MoveDown(); break;
      case 'd' : window.MoveRight(); break;
	    case ',' : window.ZoomOut(); break;
      case '.' : window.ZoomIn(); break;	
    }
  	system("clear");

  	window.GetContent(map);    
  	view.Draw(window);
    window.LineInside.clear();
  }
	return 0;
}
