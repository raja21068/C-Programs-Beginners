#include"conio.h"
#include"stdio.h"

void main(void)
{
 int a,x=0;
 clrscr();

 printf("Enter value: ");
 scanf("%d",&a);

 for(int i=1; i<=a; i++){
    x+=(a%i==0);
    if(x>2)
     break;
 }
 if(x==2)
    printf("%d, is Prime No.",a);
 else
    printf("%d is Not Prime No.",a);
 getch();
}