#include"stdio.h"
#include"conio.h"
#include"Math.h"

void main(){
   clrscr();
   float a=2;
   float b=10;
   float c=2;
   float squreRoot = sqrt(b*b-4*a*c);

   printf("With Plus sign: %.2f",(b+squreRoot)/(2*a));
   printf("\nWith Mius sign: %.2f",(b-squreRoot)/(2*a));

   getch();
}

