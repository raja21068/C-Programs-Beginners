
#include <conio.h>
#include <iostream.h>

 void main () {             // WHILE DIAMOND

    clrscr();
    int i=1, a=1;

        while(i<=10) {                              // 1st Outer while
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

  }                                 // End of 1st Outer while               


        while(a<=10) {                              // 2nd Outer While
          int b=1, c=1, d=1;
          while(b<=a) {         
            cout <<" ";
            b++;
      }                     
          
          
        while(c<=10-a)  {       
          cout <<"*";
          c++;
      }                         
          
          
        while(d<=10-a) {    
          cout <<"*";
          d++;
      }                     
          
        cout<< "\n";
        a++;

  }                                 // End of 2nd Outer while

    getche();

}