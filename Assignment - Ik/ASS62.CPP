#include <conio.h>
#include <stdio.h>


 void search(int *A, int search){

 int b=1;

 for(int i=0; i<10;i++){
   if(A[i]==search){
     printf("\nYour Element : %d is found on Array Location: %d\n",search,i);
     b=0;
   }
 }//end outer

 if(b)
   printf("\nYour Element : %d not found in Array\n",search);

 }


 void main () {
			// ARRAY SEARCHING
 clrscr();

 int A[10];
 int number;

 printf("\t\tSEARCHING PROGRAM");

 printf("\n\nEnter 10 values:\n");
 for(int i=0; i<10; i++){
   printf("A[%d] = ",i);
   scanf("%d",&A[i]);
 }

 printf("\n\nEnter any value to search in array: ");
 scanf("%d",&number);

 search(A,number);

 getche();

 }

