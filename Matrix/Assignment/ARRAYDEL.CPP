#include <conio.h>
#include <stdio.h>

void main() {

    clrscr();

    int A[]={1, 2, 3, 4, 5};
    int del, b=1;

    for(int i=0; i<5; i++) {
        printf("A[%d] = %d", i, A[i]);
        printf("\n");
    }

    printf("\n\n\tEnter any value to delete: ");
    scanf("%d", &del);

    for(i=0; i<5; i++)
    if(A[i]==del) {
        for(int k=i; k<5; k++)
        A[k]=A[k+1];

        for(i=0; i<5-1; i++)
        printf("A[%d] = %d\n", i, A[i]);
        b=0;
    }                  // End of if

    if(b)
    printf("\n\n\tEntered value is not found!");

    getche();


}