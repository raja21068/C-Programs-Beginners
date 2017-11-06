#include <conio.h>
#include <iostream.h>

 void main () {

 clrscr();

 int A[]={25,8,14,91,23};
 int max=0,loc=0;                     // Maximum value


	for(int j=0; j<5; j++)
	  cout <<"A["<<j<<"]="<<A[j]<<endl;

	cout<<"\n\n";

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

	cout<<"Maximum value is: "<<max<<" and location is: "<<loc;

 getche();

 }

