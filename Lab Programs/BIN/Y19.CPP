#include"conio.h"
#include"stdio.h"
#include"math.h"

float WIN(float x)
{
 return x;
}

void main(void)
{
 clrscr();
 float a,b,c;

 printf("Enter value = ");
 scanf("%f",&a);

 b=WIN(a);
 printf("\nThe absolute value is %f",fabs(b));

 getch();
}