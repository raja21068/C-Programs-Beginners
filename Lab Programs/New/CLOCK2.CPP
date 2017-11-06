#include "graphics.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "dos.h"
#include "math.h"

void drawCircle(int x, int y, int r);

void main(void){
  /* request auto detection */
  int gdriver = DETECT, gmode, errorcode;

  /* initialize graphics mode */
  initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

  /* read result of initialization */
  errorcode = graphresult();
  if (errorcode != grOk){  /* an error occurred */
     printf("Graphics error: %s\n", grapherrormsg(errorcode));
     printf("Press any key to halt:");
     getch();
     exit(1); /* terminate with an error code */
  }

  clearviewport();

  struct time t;
  gettime(&t); //t.ti_hour, t.ti_min, t.ti_sec

  char *no[12]={"12","1","2","3","4","5","6","7","8","9","10","11"};
  int radius = 200, w = getmaxx(), h = getmaxy();
  float radian = (M_PI/180);
  float secAngle, minAngle, hourAngle;

  for(int i = 270, j = 0, a = 360; i <= a; i += 30, j++){
     if(i==360){
	i=0;
	a=270;
     }
     float xx = (radius+15) * cos(i*radian);
     float yy = (radius+15) * sin(i*radian);
     outtextxy(xx+w/2, yy+h/2, no[j]);
  }

  drawCircle(w, h, 3);

  secAngle = (t.ti_sec * 6) - 90 + 0.5;
  minAngle = (t.ti_min * 6) - 90;
  hourAngle = ((t.ti_hour > 12 ? t.ti_hour-12 : t.ti_hour) * 30) - 90 + ((t.ti_min / 10) * 6);

  do{
     printf("%d, %f...", t.ti_sec, secAngle);
     /*sound(1000);
     delay(50);
     nosound();*/

     float xx;
     float yy;

     if(270 == (int)secAngle || 360 == (int)secAngle){
	if(360 == (int)secAngle){
	   secAngle = 0.0;
	   continue;
	}

	xx = (radius-10) * cos(minAngle * radian);
	yy = (radius-10) * sin(minAngle * radian);

	setcolor(BLACK);
	line((xx+w/2)+1, (yy+h/2)-5, (w/2), (h/2));
	minAngle += 5;

	if(270 == (int)minAngle || 360 == (int)minAngle || 330 == (int)minAngle || 30 == (int)minAngle || 90 == (int)minAngle || 150 == (int)minAngle || 210 == (int)minAngle){
	   if(360 == (int)minAngle){
	      minAngle = 0.0;
	   }

	   xx = (radius-40) * cos(hourAngle * radian);
	   yy = (radius-40) * sin(hourAngle * radian);
	   setcolor(BLACK);
	   line((xx+w/2)+1, (yy+h/2)-10, (w/2), (h/2));
	   hourAngle += 5;
	   if(360 == (int)hourAngle) hourAngle = 0.0;
	}
     }

     // Second
     setcolor(RED);
     setfillstyle(LINE_FILL, RED);
     xx = radius * cos(secAngle * radian);
     yy = radius * sin(secAngle * radian);
     line((xx+w/2), (yy+h/2), (w/2), (h/2));
     delay(1000);
     setcolor(BLACK);
     line((xx+w/2), (yy+h/2), (w/2), (h/2));
     secAngle += 5;

     // Minute
     setcolor(WHITE);
     xx = (radius-10) * cos(minAngle * radian);
     yy = (radius-10) * sin(minAngle * radian);
     line((xx+w/2)+1, (yy+h/2)-5, (w/2), (h/2));

     // Hour
     setcolor(WHITE);
     xx = (radius-40) * cos(hourAngle * radian);
     yy = (radius-40) * sin(hourAngle * radian);
     line((xx+w/2)+1, (yy+h/2)-10, (w/2), (h/2));

     drawCircle(w, h, 3);
  }while(!kbhit());
  getch();
  closegraph();
}

void drawCircle(int x, int y, int r){
  setcolor(RED);
  circle(x/2, y/2, r);
  setfillstyle(1,RED);
  floodfill(x/2,y/2,RED);
}
