#include <conio.h>
#include <stdio.h>

 void main () {

 clrscr();

 int A[]={25,108,14,91,3};
 int max=0,loc=0;                     // Smallest value


	for(int j=0; j<5; j++)
	  printf("A[%d] = %d\n",j,A[j]);

	printf("\n\n");

	for(int i=0; i<5; i++) {
	  int a=0;
	  for(j=0; j<5; j++) {
	     if(A[i]<A[j])
	       a+=1;
	     if(a==4) {
	       max=A[i];
	       loc=i;
	       break;
	     }  // End of inner if
	  }   // End of inner for
	}   // End of outer for

	printf("Smallest value is: %d and location is: %d",max,loc);

 getche();

 }

