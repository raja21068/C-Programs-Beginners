#include <conio.h>
#include <iostream.h>

void main() {

  clrscr();

  int A[]={1,2,3,4,5};
  int src, b=1;

    for(int i=0; i<5; i++)
      cout <<"A["<<i<<"] = "<<A[i]<<endl;

    cout <<"\n\n\tEnter any value to search: ";
    cin >>src;

    for(i=0; i<5; i++)
      if(A[i]==src) {
	cout <<"\nA["<<i<<"] = "<<A[i]<<endl;
	b=0;
      }                    // End of if

    if(b)
      cout <<"\n\n\tEntered value not found!";

    getche();


}