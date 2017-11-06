#include <conio.h>
#include <iostream.h>

 void main () {

     clrscr();

    for(int i=0; i<10; i++) {
      for(int j=1; j<=10-i; j++)
	cout <<"*";
      for(int k=1; k<=i+i; k++)
	cout <<" ";
      for(int l=1; l<=10-i; l++)
	cout <<"*";
      cout <<"\n";

    }


    for(i=1; i<=10; i++) {
      for(int j=1; j<=i; j++)
	cout <<"*";
      for(int k=1; k<=20-(i*2); k++)
	cout <<" ";
      for(int l=1; l<=i; l++)
	cout <<"*";
      cout <<"\n";

    }

    getche();

}