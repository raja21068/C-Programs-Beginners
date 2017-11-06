#include"stdio.h"
#include"conio.h"

void main(){
   clrscr();
   int i, end=10;

   printf("*\n");
   for(i=0; i<=end; i++){
      printf("*");
      for(int j=1; j<=i; j++){
	 if(i==end)
	   printf("*");
	 else printf(" ");
      }
      printf("*\n");
   }

   getch();
}
