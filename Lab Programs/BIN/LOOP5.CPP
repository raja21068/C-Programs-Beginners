#include"stdio.h"
#include"conio.h"

void main(void)
{
	int a,b,c,d;
	clrscr();

	printf("Step 1 -> ");

	for(a=1; a<=10; a++)
	{
	b=a*a;
	printf("%d ",b);
	}

	printf("\n\nStep 2 -> ");

	for(c=1; c<=10; c++)

	{
	d=c*c;
	printf("%d+",d);
	}

	getch();

	}