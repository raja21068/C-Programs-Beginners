
#include <conio.h>
#include <iostream.h>

 void main () {             // WHILE REVERSE DIAMOND

    clrscr();
    int i=0;

        while(i<=10) {              // Outer While
          int j=1, k=1, l=1;
          while(j<=i) {         
            cout <<" ";
            j++;
      }                         
        
        
        while(k<=10-i)  {       
          cout <<"*";
          k++;
      }                         
      
          
        while(l<=10-i) {                
          cout <<"*";
          l++;
      }                         
          
        cout<< "\n";
        i++;
    }                       // End of Outer While

    getche();

}