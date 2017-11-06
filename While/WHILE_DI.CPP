
#include <conio.h>
#include <iostream.h>

 void main () {             // WHILE HALF DIAMOND

    clrscr();
    int i=1;

        while(i<=10) {      // Outer While
          int j=1, k=1, l=1;
          while(j<=10-i) {      
            cout <<" ";
            j++;
       }                        
        
          while(k<=i*2)  {      
            cout <<"*";
            k++;
       }                        
               
          while(l<=10-i) {      
            cout <<" ";
            l++;
       }                        
          cout<< "\n";
          i++;

    }                   // End of Outer While

    getche();

}