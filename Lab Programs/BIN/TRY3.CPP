	#include "stdio.h"
	#include "conio.h"
	#include "math.h"


	void main (void)
	{
	int a,b,c,d;

	clrscr();

	printf("Enter value = ");
	scanf("%d",&a);

	printf("Enter value = ");
	scanf("%d",&b);

	c=pow(a,b);
	d=modf(a);

	printf("Result = %d %d",c,d);
	getch();
	}