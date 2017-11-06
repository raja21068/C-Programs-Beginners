#include"conio.h"
#include"stdio.h"

void main(void){
clrscr();
int a,b;
printf("enter 1st value:");
scanf("%d",&a);
printf("enter 2nd value:");
scanf("%d",&b);
if(a>b)
printf("1st age is greater than 2nd");
else if(a<b)
printf("2nd age is greater than 1st");
else
printf("both are same age");
  getch();
}