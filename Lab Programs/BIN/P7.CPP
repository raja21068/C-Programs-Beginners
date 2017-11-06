	#include "stdio.h"
	#include "conio.h"

	int Exp(int a, int b)
	{
	int x=1,y;
	for(y=1; y<=b; y++)
	x=x*a;
	return x;

	}

	void main (void)
	{
	int a,b,c;

	clrscr();

	printf("Enter value = ");
	scanf("%d",&a);

	printf("Enter value = ");
	scanf("%d",&b);

	c=Exp(a,b);

	printf("Result = %d",c);
	getch();
	}