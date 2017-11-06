#include"stdio.h"
#include"conio.h"

void main(void)

{
float a,b,c,add,sub,multi,divide;

clrscr();

printf("\n\nPut the value of a = ");
scanf("%f",&a);

printf("\nPut the value of b = ");
scanf("%f",&b);

add=a+b;
sub=a-b;
multi=a*b;
divide=a/b;

printf("\n\nThe Additions of A + b = %.1f",add);
printf("\n\nThe Subtraction of A - B = %.1f",sub);
printf("\n\nThe Multiplication of A X B = %.1f",multi);
printf("\n\nThe Dividion Of A / B = %.3f",divide);

getch();

}


