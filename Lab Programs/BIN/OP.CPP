	#include "stdio.h"
	#include "conio.h"

	int add(int a)
	{
	if(a%2==0)
	return a+1;
	else
	return a+1;
	}
	void main(void)
	{
	int a,d;
	clrscr();
	printf("Enter Value = ");
	scanf("%d",&a);
	d=add(a);
	printf("the result is %d",d);
	getch();
	}

