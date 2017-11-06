#include "graphics.h"
#include "stdio.h"
#include "conio.h"
#include "string.h"

int main(void){

   clrscr();
   char ch[50] = {" Hello Graphics"};

   int length=strlen(ch);
   int top = 0;
   int bottom = 25;
   int left = 0;
   int right = 8*length+8;

   int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

   outtextxy(left+1,bottom/2-1, ch);
   rectangle(left,top, right, bottom);

   getch();
   closegraph();
}