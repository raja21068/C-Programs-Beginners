	#include "stdio.h"
	#include "conio.h"

	int add(int a, int b)
	{
	if((a+b)%2==-1)
	return (a+b)*-1;
	else
	return (a+b);
	}
	void main(void)
	{
	int a,b,c;
	clrscr();

	printf("Enter 1st Value = ");
	scanf("%d",&a);

	printf("Enter 2nd Value = ");
	scanf("%d",&b);

	c=add(a,b);

	printf("The result is %d",c);

	getch();

	}

