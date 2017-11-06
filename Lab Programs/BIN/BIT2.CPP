#include"conio.h"
#include"stdio.h"

void main(void){
 int b1=2,a=1,b=0,l;
 clrscr();

 scanf("%d",&l);
 while(l<a){
   a*=b1;
   b++;
   if(a==l){
      printf("\n\t%d",b);
      break;
      }
      else {
	 printf("\n\t%d",b+1);
	 break;
	 }

 }

// printf("\n\t%d",b-1);
 getch();
}