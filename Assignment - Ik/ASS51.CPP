#include "stdio.h"
#include "conio.h"
#include "string.h"

 int DecToBin(int decimal){
  int count;
  int bin[9];

  for(int i=8;i>=0;i--) {
    bin[i]=(decimal%2);
    decimal=(decimal/2);
  }

  printf("\n\nDecimal to binary is: ");
  for(i=0;i<=8;i++)
    printf(" %d",bin[i]);
 }


void main(){
 clrscr();

 int decimal;

 printf("Enter any decimal value: ");
 scanf("%d",&decimal);

 DecToBin(decimal);

getch();
}
