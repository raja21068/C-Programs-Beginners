#include <conio.h>
#include <stdio.h>


 void main () {
			// ASCENDING AND DESCENDING SORTING
 clrscr();

 int A[10];
 int b;

 printf("\t\tSORTING PROGRAM");

 printf("\n\nEnter 10 values:\n");
 for(int i=0; i<10; i++){
   printf("A[%d] = ",i);
   scanf("%d",&A[i]);
 }

 printf("\nBefore Sorting\n\n");

 for(int j=0; j<10; j++)
   printf("A[%d] = %d\n",j,A[j]);

 printf("\n\n");
 for(i=1; i<=10; i++)
   for(j=0; j<10-1; j++){
     if(A[j+1]<A[j]){
       b=A[j];
       A[j]=A[j+1];
       A[j+1]=b;
     } 		// End of if
   }      // End of Inner for

 printf("\nAfter Ascending Sort\n\n");
 for(j=0; j<10; j++)
   printf("A[%d] = %d\n",j,A[j]);

 getche();

 }

