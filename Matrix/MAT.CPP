 #include <conio.h>
 #include <iostream.h>
 #include <stdio.h>

  void main () {

  clrscr();

  int A[5],i;

	printf("Enter values: ");

	for (i=0; i<5; i++) {
	printf("\nA[%d]: ",i);
	scanf("%d",&A[i]);

	}

	printf("\n\nSequential Display");
	 for (i=0; i<5; i++)
	printf("\n\nA[%d]: %d",i,A[i]);

	printf("\n\nReverse Display");
	 for (i=4; i>=0; i--)
	printf("\n\nA[%d]: %d",i,A[i]);


	getche();

	}
