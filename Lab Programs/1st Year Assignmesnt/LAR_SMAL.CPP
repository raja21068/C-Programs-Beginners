//Q 6

#include"stdio.h"
#include"conio.h"

void main()
{
  clrscr();
  int largest=0;
  int smallest=0;

  int A[9]={5,2,1,6,10,7,9,8,4};

  int i, j;  //for forLoop

  for(i=0; i<9; i++){
     if(A[i]>largest)
	largest=A[i];
  }

  smallest=A[0];

  for(i=0; i<9; i++){
     //for(j=0; j<9-1; j++)
	if(A[i]<smallest){
	  smallest=A[i];
	  printf("\nThe Smallest value is : %d",smallest);
	}
  }

  printf("\nThe Largest value is : %d",largest);
  printf("\nThe Smallest value is : %d",smallest);

  getch();
}

