#include"conio.h"
#include"stdio.h"

void main(void)
{
 clrscr();
 int radius;
 float area;

 printf("Enter Radius of cicle = ");
 scanf("%d",&radius);

 area=3.14*radius*radius;

 printf("\n\nArea of a Cirle is %.2f",area);

 getch();
}