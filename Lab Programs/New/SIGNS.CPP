#include"stdio.h"
#include"conio.h"
#include"Math.h"

void main(){
   clrscr();
   float x=10;
   float asinI = log(x+sqrt((x*x)+1));
   float acosI = log(x+sqrt((x*x)-1));

   printf("%.2f", asinI);
   printf("\n%.2f", acosI);

   getch();
}

