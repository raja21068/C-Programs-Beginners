#include "stdio.h"
#include "conio.h"

void main(){
 clrscr();

 int count=-1;
 char ch='a';

 printf("Enter any charater: ");

 while((ch!='\r')){
   ch=getche();
   count++;
 }
   printf("\n\nchar count is %d",count);
 getch();
}