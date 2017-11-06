 #include "stdio.h"
 #include "conio.h"

 void main (void)
 {
 int n, la[5];

 int max=0, loc=0;

 clrscr();

 printf("\n\nEnter values = ");


 for (int k=0; k<=4; k++) {
    scanf("\n\n%d",&la[k]);
    if(max < la[k]){
       max=la[k];
       loc=k;
    }
 }

   printf ("\n\nMaximum value is %d and location is %d as the index starts from 0",max,loc);


   getch();

   }

