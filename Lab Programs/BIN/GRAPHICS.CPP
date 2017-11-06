#include "graphics.h"
#include "stdio.h"
#include "conio.h"
#include "process.h"
#include "stdlib.h"
#include "dos.h"

#define Delay_Time 80
int main(void)
{

   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

   /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);             /* return with error code */
   }

   /* draw a line */
   //line(0, 0, getmaxx(), getmaxy());

   //setcolor (GREEN);
   //settextstyle (3,1,5);

   //outtextxy(200,200,"This is the circle demo");
  int x, y, r,c;
  /*while (!kbhit())
  {

   c = random(getmaxcolor());
   setcolor (c);
   x =  random(getmaxx());
   y =  random(getmaxy());
   r = random(100);
   circle (x,y,r);
   delay (200);
   setcolor (BLACK);
   circle (x,y,r);

   //putpixel (random(getmaxx()),random(getmaxy()),random(getmaxcolor()));
   delay (200);
  }
  */
   /* clean up */
   int i ;

while (!kbhit())
{
   for(i = 0 ; i <=200;i++)
   {    setcolor (random(getmaxcolor()));
	circle (320,240,i);
	delay(Delay_Time);
   }


   for(i = 200 ; i >=0;i-=5)
   {    setcolor (BLACK);
	circle (320,240,i);
	delay(Delay_Time);
   }

}
   getch();

   closegraph();
   return 0;
}

