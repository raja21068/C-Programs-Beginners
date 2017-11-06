
#include <conio.h>
#include <iostream.h>

 void main () {

     clrscr();

    for(int i=1; i<=10; i++) {
      for(int j=1; j<=10-i; j++)
	cout <<"*";
      cout <<"\n";
      for(int k=1; k<=i; k++)
	cout <<" ";

    }

    getche();

}