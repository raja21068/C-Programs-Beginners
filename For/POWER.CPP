
#include <conio.h>
#include <iostream.h>

 void main () {

 clrscr();
	long a,b;

	cout <<"\n\n\tEnter any number: ";
	cin >>a;

	b=a;
	   for (int i=2; i<=10; i++) {
	   b=(a*b);
	   cout <<"\n\n" <<a <<"^" <<i <<"=" <<b;
	   }
	getche();

	}

