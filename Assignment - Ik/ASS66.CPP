#include <conio.h>
#include <stdio.h>
#include <string.h>


 void main () {
  clrscr();

  int A[10],sum=0;

  printf("\nEnter Nos:\n");

  for(int i=0; i<10; i++){
    printf("A[%d] = ",i);
    scanf("%d",&A[i]);
    sum+=A[i];
  }

  float ave = sum/10;
  printf("\n\nThe average is %.1f",ave);
  getch();
 }