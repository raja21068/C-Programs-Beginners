#include"stdio.h"
#include"conio.h"

void main()
{
  clrscr();

  int largest=0;
  int smallest=0;

  int A[5][5]={ 5,  2, 3, 6, 10,
		7,  9, 8, 4, 15,
	       17, 29,38,44, 55,
	       37,119,98,34,215,
	       87, 90, 1,46,105};

  int i, j;  //for forLoop

  for(i=0; i<5; i++){
     for(j=0; j<5; j++)
	if(A[i][j]>largest)
	   largest=A[i][j];
  }

  smallest=A[0][0];

  for(i=0; i<5; i++){
     for(j=0; j<5; j++)
	if(A[i][j]<smallest){
	  smallest=A[i][j];
//	  printf("\nThe Smallest value is : %d",smallest);
	}
  }

  printf("\nThe Largest value is : %d",largest);
  printf("\nThe Smallest value is : %d",smallest);

  getch();
}

