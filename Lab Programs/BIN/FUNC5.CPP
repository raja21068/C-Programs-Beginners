	#include "stdio.h"
	#include "conio.h"


	int loop (int a, int b)
	{
	int c,sum=0,res;

	for (c=a; c<=b; c++)

	sum=sum+c;
	res=sum-a-b;

	return res;
	}


	void main (void)
	{
	int a,b,i;

	clrscr();

	printf("Enter 1st value = ");
	scanf("%d",&a);

	printf("Enter 2nd value = ");
	scanf("%d",&b);

       i=loop(a,b);

       printf("The Result is = %d",i);

       getch();
       }
