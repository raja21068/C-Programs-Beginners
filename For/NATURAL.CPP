#include <stdio.h>
#include <conio.h>

void main (void)
{
 clrscr();

 int i,j=1, sum=0;

 for(i=1; i<=16; i++){
   printf("%d  ",i);
   sum+=i;
   if(i==4*j){
     printf("%d\n",sum);
     sum=0;
     j+=1;
   }
 }
 getch();
}

