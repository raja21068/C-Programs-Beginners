#include "stdio.h"
#include "conio.h"


float Pow(float a, int b)
{
 float x=1;
 for(int i=1; i<=b; i++)
  x*=a;
 return x;
}

void main (void)
{
 float j;
 int k;

 clrscr();

 printf("\n\nEnter Base = ");
 scanf ("%f",&j);

 printf("\n\nEnter Power = ");
 scanf("%d",&k);

 float i= Pow(j,k);

 printf("\n\nPower of %.2f is %.2f",j,i);

 getch();
}