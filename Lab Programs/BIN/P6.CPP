	#include "stdio.h"
	#include "conio.h"

	float Avrg(float a, float b, float c)
	{
	float d;
	d=(a+b+c)/3;

	return d;

	}

	void main(void)
	{
	float a,b,c;
	float d;
	clrscr();

	printf("Enter 1st Value = ");
	scanf("%f",&a);

	printf("Enter 2nd Value = ");
	scanf("%f",&b);

	printf("Enter 3rd Value = ");
	scanf("%f",&c);

	d=Avrg(a,b,c);

	printf("The Average of 3 variables is = %.1f",d);

	getch();

	}

