#include "stdio.h"
#include "conio.h"

void main(){
 clrscr();
 int fact;

 printf("\n\t\tFactorials................\n");
 for(int i=1; i<=7; i++){
   fact=i;
   for(int j=i-1; j>0; j--)
     fact*=j;
   printf("%d! = %d\n",i,fact);
 }

getch();
}