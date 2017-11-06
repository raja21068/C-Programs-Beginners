#include<graphics.h>
#include<constream.h>

void main(){

   int driver=DETECT,mode;
   clrscr();
   initgraph(&driver,&mode,"\\tc\\bgi");
   setcolor(4);
   line(200,200,520,200);
   line(520,160,520,200);
   line(450,160,520,160);
   line(450,120,450,160);
   line(300,120,450,120);
   line(300,120,300,160);
   line(200,160,300,160);
   line(200,160,200,200);
    line(530,30,40,100);

   getch();
}//end of method