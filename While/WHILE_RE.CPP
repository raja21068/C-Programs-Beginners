
#include <conio.h>
#include <iostream.h>

 void main () {         // WHILE REVERSE TRIANGLE

    clrscr();
    int i=10;

        while(i>=1) {   // Outer While
          int j=1;
          while(j<=i) {
            cout <<"*";
            j++;
        }           
          cout <<"\n";
          i--;

      }             // End of Outer While
        
    getche();

}