
#include <conio.h>
#include <iostream.h>

 void main () {

     clrscr();
     int a;

    for (int i=1; i<=10; i++)   {
       a=i*2;
       for (int j=1; j<=22-a; j++)
            cout <<"*";
       cout <<"\n";
       for(int k=1; k<=i; k++)
            cout <<" ";

    }

    getche();

}