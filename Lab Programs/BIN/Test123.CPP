#include"stdio.h"
#include"conio.h"

void main(void){
   clrscr();
   int i,b;
   int array[5];
   int len=5;

   for(i=0; i<len; i++){
   printf("Enter Values: ");
   scanf("%d",&array[i]);
   }

   for(i=0; i<len; i++)
   printf("%d,",array[i]);

   printf("\n\n\nEnter delete element: ");
   scanf("%d",&b);

   for(i=0; i<len; i++)
   if(array[i]==b){
    for(int x=i; x<len-1; x++)
     array[x]=array[x+1];
    len--;
   }

   for(i=0; i<len; i++)
   printf("%d\n",array[i]);

   getch();
}// end of main

