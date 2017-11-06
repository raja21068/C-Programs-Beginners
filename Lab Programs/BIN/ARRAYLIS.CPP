#include"conio.h"
#include"stdio.h"

void main(void){
   int A[5];
   clrscr();

   for(int i=0; i<=4; i++){
      printf("Enter values: ");
      scanf("%d",&A[i]);
   }
   printf("\n\n");

  /* for(int j=0; j<=4; j++)
      printf("%d\n",A[j]);
    */
   for(int k=0; k<=4; k++){
      if(A[k]==0)
	 printf("Zero\n");
	 else
	    if(A[k]%2==0)
	       printf("%d is Even\n",A[k]);
	       else
		  printf("%d is Odd\n",A[k]);
   }
   getch();
}