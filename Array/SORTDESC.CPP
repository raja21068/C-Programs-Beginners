#include <conio.h>
#include <iostream.h>

 void main () {

	 // DESCENDING SORTING
 clrscr();

 int A[]={2,8,4,1,3};
 int b;

	cout<<"\nBefore Sorting\n\n";

	for(int j=0; j<5; j++)
	  cout <<"A["<<j<<"]="<<A[j]<<endl;

	cout<<"\n\n";

	for(int i=1; i<=5; i++)
	  for(j=0; j<5-1; j++) {
	     if(A[j]<A[j+1]) {
		b=A[j];
		A[j]=A[j+1];
		A[j+1]=b;
	     }
	  }

	cout<<"\nAfter Sorting\n\n";

	for(j=0; j<5; j++)
	  cout <<"A["<<j<<"]="<<A[j]<<endl;

 getche();

 }

