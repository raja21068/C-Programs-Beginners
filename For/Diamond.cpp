#include <conio.h>
#include <iostream.h>

 void main () {
 
     int a;
     clrscr();

    for(int i=1; i<=10; i++) { 
      for(int j=1; j<=10-i; j++)
        cout <<" ";
      for(int k=1; k<=i+i; k++)
        cout <<"*";
      cout <<"\n";

    }


  for(i=1; i<=10; i++) {
     a=i*2;
     for(int j=1; j<=22-a; j++)
        cout <<"*";
     cout <<"\n";
     for(int k=1; k<=i; k++)
        cout <<" ";

    }   

    getche();

}