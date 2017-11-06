//Q 5

#include"stdio.h"
#include"conio.h"
#include"math.h"


void main()
{
  clrscr();
  int sum=0;
  int average=0;
  int squreroot;

  int A[8]={85,99,45,44,60,22,35,70};
  int length=8;

  int i;  //for forLoop

  for(i=0; i<length; i++)
      sum+=A[i];

  printf("The sum is : %d\n",sum);

  average=sum/length;

  sum=0;

  for(i=0; i<=7; i++){
      sum+=A[i]-average;
  }

  printf("\nThe Average is : %d",average);
  printf("\nThe sum is : %d",sum);
  printf("\n\nThe Standard Deviation is : %lf",sqrt(sum));

  getch();
}

