#include <conio.h>
#include <stdio.h>

void main() {

  clrscr();

  int A[]={1,2,3,4,5};
  int src, b=1;

    for(int i=0; i<5; i++)
      printf("A[%d] = %d\n",i,A[i]);

    printf("\n\n\tEnter any value to search: ");
    scanf("%d",&src);

    for(i=0; i<5; i++)
      if(A[i]==src) {
	printf("\nA[%d] = %d\n",i,A[i]);
	b=0;
      }                    // End of if

    if(b)
      printf("\n\n\tEntered value is not found!");

    getche();


}