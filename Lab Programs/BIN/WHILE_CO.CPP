
#include <conio.h>
#include <iostream.h>

 void main () {

     clrscr();
     int i=1;

    while (i<=10) {
      int j=1;
      while (j<=i) {
      cout <<"*";
      j++;
    }
    cout <<"\n";

    i++;

    }

    i=10;

    while (i>=1) {
      int j=1;
      while (j<=i) {
      cout <<"*";
      j++;
    }
    cout <<"\n";
    i--;

   }

    getche();

}