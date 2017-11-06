#include"stdio.h"
#include"conio.h"

void main(void)

{

int a,b,c,d,x,y,z,k;

clrscr();

printf("Put the original value ");
scanf("%d",&x);

printf("\n\nType same no. one to last");

printf("\n\n\nPut 1st number ");
scanf("%d",&a);

printf("\n\nPut 2nd number ");
scanf("%d",&b);

printf("\n\nPut 3rd number ");
scanf("%d",&c);

printf("\n\nPut 4th number ");
scanf("%d",&d);

printf("\n\nThese are all no. %d, %d, %d, %d",a,b,c,d);
y=a+b+c+d;
printf("\n\nSum of these number %d, \n& then Divide with orignal value",y);
z=x/y;
printf("\n\n\nThe result is %d",z);

k=x%y;

printf("\n\nThe reminder is %d",k);
getch();

}