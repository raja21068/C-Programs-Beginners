#include "graphics.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "dos.h"

#define Delay_Time 80

void main(void){

   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

   int i, x=getmaxx(), y=getmaxy();

   while (!kbhit()){
     for(i = 0 ; i <=y/2;i++){
       setcolor(random(getmaxcolor()));
       circle (x/2,y/2,i);
       delay(Delay_Time);
     }

     for(i = y/2 ; i >=0;i-=5){
	setcolor (BLACK);
	circle (x/2,y/2,i);
	delay(Delay_Time);
     }
  }
  getch();
  closegraph();
}

