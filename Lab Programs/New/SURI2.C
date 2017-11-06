#include"stdio.h"
#include"conio.h"

void addition(int a, int b){
  int c=a+b;
  printf("Addition is:%d",c);
}
void subtraction(int a, int b){
  int c=a-b;
  printf("subtraction is:%d",c);
}
void multiplication(int a, int b){
  int c=a*b;
  printf("multiplication is:%d",c);
}
void division(int a, int b){
  int c=a/b;
  printf("division is:%d",c);
}
void main(){
  int a,b;
  char c;
  clrscr();
       printf("Enter an operator:");
       scanf("%c",&c);
       printf("Enter 1st value:");
       scanf("%d",&a);
       printf("Enter 2nd value:");
       scanf("%d",&b);

 switch (c){
   case '+':
   addition (a,b);
   break;
   case '-':
   subtraction (a,b);
   break;
   case '*':
   multiplication (a,b);
   break;
   case '/':
   division (a,b);
   break;
   }
   getch();
}