#include"conio.h"
#include"stdio.h"

void main(void)
{
 int a,b,c=4,d=1;
 clrscr();

 for(a=1; a<=5; a+=2) {
 for(int i=c; i>=1; i--) {
  printf(" ");
 }
 for(b=1; b<=a; b++){
  printf("*");
 }
 printf("\n");
 c--;
}

 for(a=5; a>=1; a-=2) {
 for(int i=1; i<=d; i++) {
  printf(" ");
 }
 for(b=a; b>=1; b--){
  printf("*");
 }
 printf("\n");
 d++;
}


  getch();
}