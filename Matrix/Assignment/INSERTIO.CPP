                                        // Insertion Array


#include"conio.h"
#include"stdio.h"

void main(void){
    int A[5]={1, 2, 3, 4, 5}, b, a ;
    clrscr();

    for(a=0; a<5; a++){
        printf("A[%d] : %d\n", a, A[a]);
    }

    printf("Enter Value : ");
    scanf("%d", &b);

    for(a=4; a>=0; a--){
        A[a+1]=A[a];
    }
    A[0]=b;

    for(a=0; a<=5; a++){
        printf("A[%d] : %d\n", a, A[a]);
    }

    getch();
}


                                            // MAX_Array
                                
                                
#include <conio.h>
#include <stdio.h>

void main () {

    clrscr();

    int A[]={25, 8, 14, 91, 23};
    int max=0, loc=0;                     // Maximum value


    for(int j=0; j<5; j++)
    printf("A[%d] = %d\n", j, A[j]);

    printf("\n\n");

    for(int i=0; i<5; i++) {
        int a=0;
        for(j=0; j<5; j++) {
            if(A[i]>A[j])
            a+=1;
            if(a==4) {
                max=A[i];
                loc=i;
                break;
            }  // End of inner if
        }   // End of inner for
    }   // End of outer for

    printf("Maximum value is: %d and location is: %d", max, loc);

    getche();

}


                                            // Small_Array
                                
                                
#include <conio.h>
#include <stdio.h>

void main () {

    clrscr();

    int A[]={25, 108, 14, 91, 3};
    int max=0, loc=0;                     // Smallest value


    for(int j=0; j<5; j++)
    printf("A[%d] = %d\n", j, A[j]);

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

    printf("Smallest value is: %d and location is: %d", max, loc);

    getche();

}


                            
                            
                                            // Sort_Asc
                                            
                                            
                                            
#include <conio.h>
#include <stdio.h>

void main () {
    // ASCENDING SORTING
    clrscr();

    int A[]={500, 700, 200, 100, 300};
    int b;

    printf("\nBefore Sorting\n\n");

    for(int j=0; j<5; j++)
    printf("A["%d] = %d\n",j,A[j]);

	cout<<"\n\n";

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
	printf("A[%d] = %d\n", j, A[j]);

	getche();

}


											// Sort_Desc
										
										
										
#include <conio.h>
#include <stdio.h>

void main () {
	// DESCENDING SORTING
	clrscr();

	int A[]={2, 8, 4, 1, 3};
	int b;

	printf("\nBefore Sorting\n\n");

	for(int j=0; j<5; j++)
	printf("A[%d] = %d\n", j, A[j]);

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
	printf("A[%d] = %d\n", j, A[j]);

	getche();

}


