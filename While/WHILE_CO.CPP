
#include <conio.h>
#include <iostream.h>

 void main () {         // WHILE COMBINE TRIANGLE

    clrscr();
    int i=1;

        while(i<=10) {      // 1st Outer While 
          int j=1;
          while(j<=i) {
            cout <<"*";
            j++;
        }           
          cout <<"\n";
          i++;

      }             

          i=10;

        while(i>=1) {       // 2nd Outer While
          int j=1;
          while(j<=i) {
            cout <<"*";
            j++;
        }           
          cout <<"\n";
          i--;

      }             

    getche();

}