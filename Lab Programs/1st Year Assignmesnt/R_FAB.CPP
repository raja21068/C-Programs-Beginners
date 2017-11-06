//Q 4

#include "stdio.h"
#include "conio.h"

int fab(int num){
    if(num<=1)
       return num;
    else
       return (fab(num-1)+fab(num-2));
}

void main(){
   clrscr();
   for(int i=1; i<=20; i++)
      printf("%d, ",fab(i));

   getch();
}


