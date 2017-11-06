#include"conio.h"
#include"stdio.h"

void main(void){
 float b=-3.17;
 int a=(int) b;
 clrscr();
 if((a==b)||(a>b)){
    printf("%d",a);
 }else{
      a+=1;
      printf("%d",a);
  }
 getch();
}