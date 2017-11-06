#include <conio.h>
#include <iostream.h>

void main() {

  clrscr();

  int A[]={1,2,3,4,5};
  int del, b=1;

    for(int i=0; i<5; i++)
      cout <<"A["<<i<<"] = "<<A[i]<<endl;

    cout <<"\n\n\tEnter any value to delete: ";
    cin >>del;

    for(i=0; i<5; i++)
      if(A[i]==del) {
	for(int k=i; k<5; k++)
	  A[k]=A[k+1];

    for(i=0; i<5-1; i++)
      cout <<"A["<<i<<"] = "<<A[i]<<endl;
    b=0;
      }                    // End of if

    if(b)
      cout <<"\n\n\tEntered value is not found!";

    getche();


}