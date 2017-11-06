#include <conio.h>
#include <stdio.h>

 void seconds(int hr,int min,int sec){

  long secs;

  secs = ((hr*60*60)+(min*60)+sec);

  printf("\n\nTime: %d:%d:%d",hr,min,sec);
  printf("\n\nThe entered time in seconds is %ld",secs);

 }


 void main () {
  clrscr();

  int hr,min,sec;

 printf("\n\nEnter time: ");

 printf("\n\nEnter Hr: ");
 scanf("%d",&hr);

 printf("\n\nEnter Min: ");
 scanf("%d",&min);

 printf("\n\nEnter Sec: ");
 scanf("%d",&sec);

 seconds(hr,min,sec);

 getch();

 }

