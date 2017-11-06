#include<graphics.h>
#include<constream.h>
 void main(){

    int driver=0,mode;
    initgraph(&driver,&mode,"\\tc\\bgi");

    line(170,100,300,100);
    line(300,100,400,160);
    line(400,160,510,160);
    line(510,160,510,220);
    line(510,220,400,220);
    arc(365,233,20,159,38);
    line(200,220,330,220);
    arc(163,232,020,159,38);
    line(20,220,126,220);
    line(20,220,20,160);
    line(20,160,110,160);
    line(170,100,110,160);

    for(; ;){

      for(int j=0; j<25; j++){
      setcolor(j);
   circle(165,228,3+j);
   circle(365,228,3+j);
   }
 }

    getch();


 }//end of method

