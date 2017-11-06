	#include "stdio.h"
	#include "conio.h"

	void main (void)
	{
	clrscr();
	int a,b,c,d,e,sum=0;

	for(a=1; a<=10; a++)
	{
	b=a*a;
	printf("%d ",b);
	}
	for(c=1; c<=10; c++)
	{
	d=c*c;
	sum=sum+d;
	}
	printf("\n\n%d",sum);
	getch();
	}