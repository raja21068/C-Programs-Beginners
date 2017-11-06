#include "graphics.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "dos.h"
#include "math.h"

#define arg_sec M_PI/30
#define arg_hour M_PI/6
#define arg_min M_PI/360

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

  char *k[12]={"1","2","3","4","5","6","7","8","9","10","11","12"};
  struct time _time;
  float angle=-1.571428; //printing the hours -1,2,3,...12
  int radius = 150, x = getmaxx(), y = getmaxy();
  int i,a,b;
  char t[1000];

  for(i=1;i<=12;i++){
     //setcolor(i);
//     angle = angle + 5*0.104666;	//since 3.14/180=0.104666 = 1 degree
     /*sprintf(t,"%d",i);
     float x= 320+180*cos(-angle);//(-angle) so as to rotate clockwise
     float y= 240-180*sin(-angle);
     printf("%f : %f\n", x, y);
     outtextxy(x-5,y-5,t);*/
     a=160*cos(arg_hour*i-M_PI_2);
     b=160*sin(arg_hour*i-M_PI_2);
     printf("%d : %d\n", _time.ti_sec, b);
     outtextxy((a+x/2),(b+y/2),k[i-1]);
  }

   setcolor(WHITE);
   circle(x/2,y/2,radius);
   setcolor(RED);
   circle(x/2,y/2,3);
   delay(1000);
   do{
      //sound(1000);
      //delay(50);
      //nosound();
      //angle = angle + 5*0.104666;	//since 3.14/180=0.104666 = 1 degree
      int xx= 160*cos(arg_sec*_time.ti_sec-M_PI_2);
      int yy= 160*sin(arg_sec*_time.ti_sec-M_PI_2);
      setcolor(RED);
      line(xx,yy/2, x/2, y/2);
      delay(1000);
      setcolor(BLACK);
      line(xx,yy, x/2, y/2);
   }while(!kbhit());


  getch();
  closegraph();
}

