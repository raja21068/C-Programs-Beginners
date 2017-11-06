#include "stdio.h"
#include "conio.h"


void numbers(){
 long i;
 int temp[5];

 printf("Enter any five digit number: ");
 scanf("%ld",&i);

 temp[0]=i/10000;
 i=i%10000;

 temp[1]=i/1000;
 i=i%1000;

 temp[2]=i/100;
 i=i%100;

 temp[3]=i/10;
 i=i%10;

 temp[4]=i;

 printf("\n\n");
 for(int j=0; j<5; j++)
   printf("%d  ",temp[j]);

}

void main(){
 clrscr();

 numbers();
getch();
}
