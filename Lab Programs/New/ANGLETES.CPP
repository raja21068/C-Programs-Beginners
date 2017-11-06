#include "graphics.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "dos.h"
#include "math.h"

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

  char *k[12]={"3","4","5","6","7","8","9","10","11","12","1","2",};
  char t[1];
  int angle = 180, x = getmaxx(), y = getmaxy();
  float radian = (M_PI/180);

  for(int i = 0, j=0; i < 360; i+=30,j++){
     float xx = angle * sin(i*radian);
     float yy = angle * cos(i*radian);
     outtextxy(xx+x/2, yy+y/2, k[j]);
  }

  getch();
  closegraph();
}