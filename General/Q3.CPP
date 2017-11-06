 #include "stdio.h"
 #include "conio.h"

 void main (){

 clrscr();

 int a,b,c,x,y;

 printf("\n\n\t\tSolving Equation X=++a + b*c \n\n\t\t Y=a++ +b*c");

 printf("\n\n\t\tEnter value for a = ");
 scanf("%d",&a);

 printf("\n\n\t\tEnter value for b = ");
 scanf("%d",&b);

 printf("\n\n\t\tEnter value for c = ");
 scanf("%d",&c);

 x=++a + b*c;
 y=a++ +b*c;

 printf("\n\n\t\tThe X= ++a + b*c = %d ",x);
 printf("\n\n\t\tThe Y= a++ + b*c = %d ",y);

 getch();

 }
