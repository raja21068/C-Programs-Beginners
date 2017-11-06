#include<graphics.h>
#include<constream.h>

void main(){

   int driver=DETECT,mode;
   clrscr();
   initgraph(&driver,&mode,"\\tc\\bgi");
   //rectangle(left,top,right,bottom);

   setcolor(4);


    rectangle(300,300,100,100);
    rectangle(200,250,400,50);
    line(200,50,100,100);
    line(300,100,400,50);
    line(200,250,100,300);
    line(400,250,300,300);
    getch();

}//end of method