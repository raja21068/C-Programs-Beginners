#include"conio.h"
#include"stdio.h"

void main(void){
clrscr();
int a,b,c,d,e,f;
a=(10>5)&&(10>=5)&&(10==5);
b=(100!=25)&&(124<=5);
c=(278==45)&&(56!=56);
d=(25>45)||(10!=5)||(10<=5);
e=(10<10)||(10>5);
f=(25!=25)||(25!=25);
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d\n",f);
  getch();
}