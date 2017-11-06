
#include <conio.h>
#include <iostream.h>

void main () {

  clrscr();
  int a=1;

   for(int i=1; i<=10; i++) {
     for(int j=1; j<=11-i; j++)
       cout<<"*";
     for(int k=1; k<=a; k++)
       cout<<" ";
     for(int l=1; l<=11-i; l++)
       cout<<"*";
     cout<<"\n";
     a+=2;
   }

     a=18;
   for(i=1; i<=9; i++) {
     for(int j=1; j<=(i+1); j++)
       cout<<"*";
     for(int k=1; k<=a-i; k++)
       cout<<" ";
     for(int l=1; l<=(i+1); l++)
       cout<<"*";
     cout<<"\n";
     a--;
   }




  getche();
 }
