	#include "stdio.h"
	#include "conio.h"


	int func (int a)
	{

	if (a%2==0)
	return a+1;

	else
	return a+1;
	}




	void main (void)
	{
	 int a,b;

	 clrscr();

	 printf ("Enter any EVEN value = ");
	 scanf ("%d",&a);

	 b=func(a);

	 if (b%2==1)

	 printf ("\n\nThe next ODD number will be = %d",b);

	 else
	 printf ("\nInvalid value... you need to Enter an Even number");
	getch();
	}