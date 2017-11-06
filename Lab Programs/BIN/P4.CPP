	#include "stdio.h"
	#include "conio.h"

	int Loop(int a, int b)
	{
	int c,result,sum=0;
	for(c=a; c<=b; c++)
	sum=sum+c;
	result=sum-a-b;
	return result;
	}

	void main(void)
	{
	int a,b,c;
	clrscr();

	printf("Enter 1st Value = ");
	scanf("%d",&a);

	printf("Enter 2nd Value = ");
	scanf("%d",&b);

	c=Loop(a,b);

	printf("The result is = %d",c);

	getch();

	}

