#include "stdio.h"
#include "conio.h"
#include "math.h"
void main(void)
{

clrscr();

int a,b,c,x,y,z,k;

printf("put the value of a = ");
scanf("%d",&a);

printf("\nput the value of b = ");
scanf("%d",&b);

printf("\nput the value of c = ");
scanf("%d",&c);

x=sqrt(b*b-4*a*c);
y=-b+x/2*a;
z=-b-x/2*a;

printf("\n\nThe quadratic solution is in +ve = %d",y);

printf("\n\nThe quadratic solution is in -ve = %d",z);

getch();

}