
#include <conio.h>
#include <iostream.h>

 void main () {                 // WHILE SKIP DIAMOND

    clrscr();
    int i=0, a=1;

        while(i<=10) {              // 1ST Outer While
          int j=1, k=1, l=1;
          while(j<=11-i) {          
            cout <<"*";
            j++;
      }             
          
          while(k<=i*2)  {              
            cout <<" ";
            k++;
      }                             
          
          while(l<=11-i) {              
            cout <<"*";
            l++;
      }                             
          
          cout<< "\n";
          i++;

  }                                 // End of 1st Outer While

    
        while(a<=11) {                              // 2nd Outer While
          int b=1, c=1, d=1;
          while(b<=a) {             
            cout <<"*";
            b++;
      }                             
              
        while(c<=22-(a*2))  {       
          cout <<" ";
          c++;
      }                             
          
        while(d<=a) {               
          cout <<"*";
          d++;
      }                             
          
        cout<< "\n";
        a++;
        
  }                                 // End of 2nd Outer While
      
    getche();

}