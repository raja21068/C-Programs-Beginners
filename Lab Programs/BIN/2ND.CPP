#include"stdio.h"
#include"conio.h"
#include"math.h"

void main(void)

{

float e1,e,m,c,a,b,y,x;

clrscr();

printf("\t\n\nSolution of E=MC2 will be :-");

printf("\n\n\nPut the value of m = ");
scanf("%f",&m);

printf("\nPut the value of c = ");
scanf("%f",&c);

e=m*(c*c);
printf("\nThe result is %.1f",e);

getch();

clrscr();

		//Part II

printf("\t\n\nBy using Quadratic Equation solution will be");

printf("\n\n\nPut the value of b = ");
scanf("%f",&b);

printf("\nPut the value of a = ");
scanf("%f",&a);

printf("\nPut the value of c = ");
scanf("%f",&c);

m=sqrt(b*b-4*a*c);

e=-b+m/2*a;
e1=-b-m/2*a;

printf("\n\nThe 1st Result is %.1f",e);

printf("\n\nThe 2nd Result is %.1f",e1);

getch();

clrscr();

		//Part III

printf("\t\n\nThe solution of y=a2+b2+c2 is :-");

printf("\n\n\nPut the value of a = ");
scanf("%f",&a);

printf("\nPut the value of b = ");
scanf("%f",&b);

printf("\nPut the value of c = ");
scanf("%f",&c);

y=a*a+b*b+c*c;

printf("\n\nThe result would be %.1f",y);

getch();

clrscr();

		//Part IV

printf("\t\n\nThe solution of Z=ax2+bx+c is");

printf("\n\nPut the value of x = ");
scanf("%f",&x);

printf("\nPut the value of a = ");
scanf("%f",&a);

printf("\nPut the value of b = ");
scanf("%f",&b);

printf("\nPut the value of c = ");
scanf("%f",&c);

m=a*(x*x)+b*x+c;

printf("\n\n\nThe result would be %.1f",m);

getch();

}
