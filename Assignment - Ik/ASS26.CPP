#include "stdio.h"
#include "conio.h"
#include "string.h"

void main(){
 clrscr();
 char binary[10];
 int decimal=0;
 int count=1;

 printf("Enter Binary number: ");
 gets(binary);

 int length = strlen(binary);

 for(int i=length-1; i>=0; i--){
   if(binary[i]=='1')
     decimal+=count;

   count+=count;
 }
   printf("\n\nDecimal value is: %d",decimal);

getch();
}
