	#include "stdio.h"
	#include "conio.h"


	int func (int a, int b)
	{
	if ((a-b)%2==1)
	return (a+b)*-1;

	else
	return (a+b);

	}


	void main (void)
	{
	 int a,b,c;

	 clrscr();

	 printf ("\n\nEnter 1st value = ");
	 scanf ("%d",&a);

	 printf ("\n\nEnter 2nd value = ");
	 scanf ("%d",&b);

	 c=func(a,b);

	 printf ("\n\nThe positive difference would be = %d",c);

	getch();
	}