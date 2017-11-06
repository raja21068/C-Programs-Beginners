#include <conio.h>
#include <stdio.h>

 void main () {
			// DESCENDING SORTING
 clrscr();

 int A[]={2,8,4,1,3};
 int b;

	printf("\nBefore Sorting\n\n");

	for(int j=0; j<5; j++)
	  printf("A[%d] = %d\n",j,A[j]);

	printf("\n\n");

	for(int i=1; i<=5; i++)
	  for(j=0; j<5-1; j++) {
	     if(A[j]<A[j+1]) {
		b=A[j];
		A[j]=A[j+1];
		A[j+1]=b;
	     }
	  }

	printf("\nAfter Sorting\n\n");

	for(j=0; j<5; j++)
	  printf("A[%d] = %d\n",j,A[j]);

 getche();

 }

