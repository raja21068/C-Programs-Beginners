// Q 22

#include "stdio.h"
#include "conio.h"

void main(void){
clrscr();
int val,i,fact=1;

printf("Put the value = ");
scanf("%d",&val);

for(i=val; i>=1; i--)
fact*=i
;

printf("%d is %d\n",val,fact);
getch();
}