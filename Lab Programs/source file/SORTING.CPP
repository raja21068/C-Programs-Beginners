#include <conio.h>
#include <stdio.h>

 void main () {
 clrscr();

 int A[]={500,700,200,100,300};
 int b;

	printf("\nBefore Sorting\n\n");

	for(int j=0; j<5; j++)
	  printf("\nA[%d] = %d",j,A[j]);

	printf("\n\n");

	for(int i=1; i<=5; i++)
	  for(j=0; j<5-1; j++) {
	     if(A[j+1]<A[j]) {
		b=A[j];
		A[j]=A[j+1];
		A[j+1]=b;
	     } 		// End of if
	  }      // End of Inner for

	printf("\nAfter Sorting\n\n");

	for(j=0; j<5; j++)
	  printf("\nA[%d] = %d",j,A[j]);

 getche();

 }

