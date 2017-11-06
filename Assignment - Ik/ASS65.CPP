#include <conio.h>
#include <stdio.h>

void main () {
 clrscr();
 int a,b,c,d,e,f,g;

 printf("Enter two fraction numbers(a/b,c/d): ");
 scanf("%d/%d,%d/%d",&a,&b,&c,&d);

 e=b*d;
 f=e/b;
 g=e/d;

 printf("\n\nThe sum of %d/%d and %d/%d is: %d/%d",a,b,c,d,(a*f+c*g),e);

 getch();
 }