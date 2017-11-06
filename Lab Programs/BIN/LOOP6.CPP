#include "stdio.h"
#include "conio.h"

void main(void)
{
	int a,b,c,d,e,sum=0;
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
	sum=sum+d;
	}
	printf("\n\nThe average is Av= %d/10",sum);
	printf("\n\n\t       Av = %d Ans",sum/10);
	getch();

	}