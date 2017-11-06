 #include <conio.h>
 #include <iostream.h>

 void main () {

  clrscr();

	for (int i=1; i<=10; i++) {
	  for (int j=1; j<i; j++)
	  cout <<"*";
	  cout <<endl;

	  }

	for (int k=10; k>=1; k--) {
	  for (int l=1; l<k; l++)
	  cout <<"*";
	  cout <<endl;

	  }

	getche();

	}

