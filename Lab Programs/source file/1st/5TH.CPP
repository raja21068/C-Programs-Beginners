#include"stdio.h"
#include"conio.h"

void main(void)

{

int a,b,c,y1,y2,y3,y4;

clrscr();

printf("\n\nPut the value of a = ");
scanf("%d",&a);

printf("\nPut the value of b = ");
scanf("%d",&b);

printf("\nPut the value of c = ");
scanf("%d",&c);

y1=(a==b)!=c;
y2=(a!=b);
y3=(a>=b);
y4=(c==b==a)==10;

printf("\n\n\nThe result of Y1=(a==b)!=c is %d",y1);
printf("\n\nThe result of Y2=(a!=b) is %d",y2);
printf("\n\nThe result of Y3=(a>=b) is %d",y3);
printf("\n\nThe result of Y4=(a==b==c)==10 is %d",y4);

getch();

}

