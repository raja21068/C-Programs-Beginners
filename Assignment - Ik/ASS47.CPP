#include "stdio.h"
#include "conio.h"
#include "string.h"

 int fibonacci(int n){

  int a=n,b=0,i;

   printf("\nFibonacci Series for the given number is:\n\n");
   for(i=1; i<=10; i++){
     a=a+b;
     b=a-b;
     printf(" %d ",b);
   }
 }


 void main(){
  clrscr();
  int number;

  printf("Enter any number: ");
  scanf("%d",&number);

  fibonacci(number);

  getch();
 }
