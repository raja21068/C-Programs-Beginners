#include <conio.h>
#include <stdio.h>

struct Time{
 int time;
}hr,min,secs;

void main () {
 clrscr();

 printf("Enter time:");
 scanf("%d:%d:%d",&hr.time,&min.time,&secs.time);

 long seconds = (hr.time*60*60)+(min.time*60)+(secs.time);
 printf("\n\nTime: %d:%d:%d",hr.time,min.time,secs.time);
 printf("\n\nTime in seconds: %ld",seconds);

 getch();
 }