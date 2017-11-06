#include"conio.h"
#include"stdio.h"

void main(void){
 clrscr();
 int base=2;
 int y=1, i=1, x;

 printf("Enter Value: ");
 scanf("%d", &x);

 while(i<=x){
    y*=base;
    if(y==x)
      break;
    i++;
 }

 printf("%d", i);
 getch();
}
