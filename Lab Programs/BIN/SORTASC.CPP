#include <conio.h>
#include <iostream.h>

 void main () {
			// ASCENDING SORTING
 clrscr();

 int A[]={500,700,200,100,300};
 int b;

	cout<<"\nBefore Sorting\n\n";

	for(int j=0; j<5; j++)
	  cout <<"A["<<j<<"]="<<A[j]<<endl;

	cout<<"\n\n";

	for(int i=1; i<=5; i++)
	  for(j=0; j<5-1; j++) {
	     if(A[j+1]<A[j]) {
		b=A[j];
		A[j]=A[j+1];
		A[j+1]=b;
	     } 		// End of if
	  }      // End of Inner for

	cout<<"\nAfter Sorting\n\n";

	for(j=0; j<5; j++)
	  cout <<"A["<<j<<"]="<<A[j]<<endl;

 getche();

 }

