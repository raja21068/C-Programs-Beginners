#include"conio.h"
#include"stdio.h"

void main(void){
 int b1=2,a=1,b=0,l;
 clrscr();

 scanf("%d",&l);
 for(int i=1; i<=l; i++){
   a*=b1;
   b++;
   if(a==l)
      break;
 }

 printf("\n\t%d",b-1);
 getch();
}