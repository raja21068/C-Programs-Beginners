#include<graphics.h>
#include<constream.h>

void main(){

   int driver=DETECT,mode;
   clrscr();
   initgraph(&driver,&mode,"\\tc\\bgi");
   setcolor(4);
   //rectangle(left,top,right,bottom);
    for(int i=0; i<10; i++){
    rectangle(300+i,300+i,100+i,100+i);
    rectangle(200+i,250+i,400+i,50+i);
    line(200+i,50+i,100+i,100+i);
    line(300+i,100+i,400+i,50+i);
    line(200+i,250+i,100+i,300+i);
    line(400+i,250+i,300+i,300+i);}
    getch();

}//end of method