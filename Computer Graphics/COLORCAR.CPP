#include<graphics.h>
#include<constream.h>
 void main(){

    int driver=0,mode;
    initgraph(&driver,&mode,"\\tc\\bgi");
  for(int i=0; i<20; i++){
    setcolor(i);
    line(170+i,100+i,300+i,100+i);
    line(300+i,100+i,400+i,160+i);
    line(400+i,160+i,510+i,160+i);
    line(510+i,160+i,510+i,220+i);
    line(510+i,220+i,400+i,220+i);
    arc(365,233,20,159,38);
    line(200+i,220+i,330+i,220+i);
    arc(163,232,020,159,38);
    line(20+i,220+i,126+i,220+i);
    line(20+i,220+i,20+i,160+i);
    line(20+i,160+i,110+i,160+i);
    line(170+i,100+i,110+i,160+i);
    }
  for(int j=0; j<25; j++){
      setcolor(j);
   circle(170,230,3+j);
   circle(370,230,3+j);
   }
    getch();


 }//end of method

