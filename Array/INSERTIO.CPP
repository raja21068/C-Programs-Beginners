#include"conio.h"
#include"stdio.h"

void main(void){
 int A[5]={1,2,3,4,5}, b,a ;
 clrscr();

 for(a=0; a<5; a++){
  printf("A[%d] : %d\n",a,A[a]);
 }

 printf("Enter Value : ");
 scanf("%d",&b);

 for(a=4; a>=0; a--){
   A[a+1]=A[a];
 }
 A[0]=b;

 for(a=0; a<=5; a++){
  printf("A[%d] : %d\n",a,A[a]);
 }

 getch();
}