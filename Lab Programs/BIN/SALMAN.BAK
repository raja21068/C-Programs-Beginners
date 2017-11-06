#include"stdio.h"
#include"conio.h"


int ipow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
	if (exp & 1)
	    result *= base;
	exp >>= 1;
	base *= base;
    }

    return result;
}

void main (void)
{
clrscr();
int a,b,c;

printf("Enter Base = ");
scanf("%d",&a);

printf("Enter power = ");
scanf("%d",&b);

c=ipow(a,b);

printf("The Result is %d",c);

getch();
}


