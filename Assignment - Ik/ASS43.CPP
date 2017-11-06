#include <conio.h>
#include <stdio.h>


 void sort(int *A){

  int b;

  printf("\nBefore Sorting\n\n");

  for(int j=0; j<5; j++)
    printf("A[%d] = %d\n",j,A[j]);

   printf("\n\n");
   for(int i=1; i<=5; i++)
     for(j=0; j<5-1; j++){
       if(A[j+1]<A[j]){
	 b=A[j];
	 A[j]=A[j+1];
	 A[j+1]=b;
       } 		// End of if
     }      // End of Inner for

   printf("\nAfter Ascending Sort\n\n");
   for(j=0; j<5; j++)
     printf("A[%d] = %d\n",j,A[j]);


   printf("\n\n");
   for(i=1; i<=5; i++)
     for(j=0; j<5-1; j++){
       if(A[j+1]>A[j]){
	 b=A[j];
	 A[j]=A[j+1];
	 A[j+1]=b;
       } 		// End of if
     }      // End of Inner for

   printf("\nAfter Descending Sort\n\n");
   for(j=0; j<5; j++)
     printf("A[%d] = %d\n",j,A[j]);

 }


 void main () {
			// ASCENDING AND DESCENDING SORTING
 clrscr();

 int A[10];
 int b;

 printf("\t\tSORTING PROGRAM");

 printf("\n\nEnter 5 values:\n");
 for(int i=0; i<5; i++){
   printf("A[%d] = ",i);
   scanf("%d",&A[i]);
 }

 sort(A);

 getche();

 }

