#include"conio.h"
#include"stdio.h"
#define Pi 3.14
void main(void)
{
 clrscr();
 int radius,height;
 float calc;

 printf("A cylinder  with radius r units and height h units has a volume  of V cubic \nunits given by \n\t\tV=\xE3r\xFDh");

 printf("\n\nEnter radius = ");
 scanf("%d",&radius);

 printf("\nEnter height = ");
 scanf("%d",&height);

 calc=Pi*radius*radius*height;

 printf("\n\nThe voulme of Cylinder is %.2f",calc);

 getch();
}