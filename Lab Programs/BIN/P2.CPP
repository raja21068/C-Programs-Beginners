	#include "stdio.h"
	#include "conio.h"

	int add(int a)
	{

	return a+1;

	}
	void main(void)
	{
	int a;
	int b;

	clrscr();

	printf("Enter Value = ");
	scanf("%d",&a);

	b=add(a);

	if(b%2==1)
	printf("The next odd no. is %d",b);

	else
	printf("Invalid value - plz enter odd value");

	getch();

	}

