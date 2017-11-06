#include <conio.h>
#include <stdio.h>

void main () {
 clrscr();
 int guests, chairs, fact=1;

 printf("Enter number of guests: ");
 scanf("%d",&guests);

 printf("Enter number of chairs: ");
 scanf("%d",&chairs);

 int n = guests-chairs;
 fact=guests;

 for(int i=guests-1; i>n; i--)
   fact = (fact*i);

 printf("\n\nThe possible arrangement of %d guests in %d chairs is %d",guests,chairs,fact);

 getch();
 }