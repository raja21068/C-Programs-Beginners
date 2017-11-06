#include"conio.h"
#include"stdio.h"

void main(void)
{
 clrscr();
 int feet;
 float meter;

 printf("Enter Feets = ");
 scanf("%d",&feet);

 meter=feet*0.3084;

 printf("\n\n%.2f Meters",meter);

 getch();
}