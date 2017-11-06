// Q 19

#include"stdio.h"
#include"conio.h"

void main(void)
{
	int a,b,c,d,e,f,g;
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

	printf("\n\nAverage = Sum of No's / Total Numbers");

	for(e=1; e<=10; e+=2)
	f+=e;
	g=f/10;
	printf("\n\nAv = %d / 10 = %d",f,g);

	getch();

	}