	#include "stdio.h"
	#include "conio.h"

	void main (void)
	{
	int a,b,c,sum=0,res;

	clrscr();
	printf("Enter 1st value = ");
	scanf("%d",&a);

	printf("Enter 2nd value = ");
	scanf("%d",&b);

       for (c=a; c<=b; c++)

       sum=sum+c;
       res=sum-a-b;

       printf("The Result is = %d",res);

       getch();
       }
