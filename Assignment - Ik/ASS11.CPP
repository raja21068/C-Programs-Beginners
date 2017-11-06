#include "stdio.h"
#include "conio.h"

void main(){
 clrscr();
 int c=49;

 for(int i=0; i<2; i++){
   for(int j=0; j<3; j++){
     printf("%c\t",c);
     c++;
   }
   printf("\n");
 }

getch();
}