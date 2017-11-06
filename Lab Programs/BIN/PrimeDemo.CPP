#include<stdio.h>
#include<conio.h>

void main(){
   int count,i=1,a;
   clrscr();
   while(i<=50){
      count=0;
      a=1;
      while(a<=i){
	 if(i%a==0)
	 count++;
	 a++;
      }
      if(count==2)
      printf("%d,",i);
      i++;
   }
   getch();
}