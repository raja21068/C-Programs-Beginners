#include <conio.h>
#include <stdio.h>

struct fraction{
int a,b,c,d,e,f,g;

}num;

void main () {
 clrscr();

 printf("Enter two fraction numbers(a/b,c/d): ");
 scanf("%d/%d,%d/%d",&num.a,&num.b,&num.c,&num.d);

 num.e=num.b*num.d;
 num.f=num.e/num.b;
 num.g=num.e/num.d;

 printf("\n\nThe sum of %d/%d and %d/%d is: %d/%d",num.a,num.b,num.c,num.d,(num.a*num.f+num.c*num.g),num.e);

 getch();
}