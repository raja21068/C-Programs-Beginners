#include<graphics.h>
#include<constream.h>

void main(){

   int driver=DETECT,mode;
   clrscr();
   initgraph(&driver,&mode,"\\tc\\bgi");
   setcolor(4);
   //rectangle(left,top,right,bottom);

    line(400,410,300,140);
    line(120,390,300,140);
    line(400,410,120,390);
    line(270,300,300,140);
    line(270,300,120,390);
    line(270,300,400,410);
    getch();

}//end of method