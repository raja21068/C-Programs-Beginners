#include"stdio.h"
#include"conio.h"

void main(void)

{
int a,b,c;
int y1,y2,y3,y4;

clrscr();

gotoxy(15,7);
printf("\t\tThis Programs Created By\n\n\t\t\t          YOGESHWAR KHATRI \n\n\t\t\t            2k10-CSE-86");
getch();

clrscr();

printf("\n\nPut the value of a = ");
scanf("%d",&a);

printf("\nPut the value of b = ");
scanf("%d",&b);

printf("\nPut the value of c = ");
scanf("%d",&c);

y1=(a==b)!=c;
y2=(a!=b);
y3=(a>=b);
y4=(c==b==a)==10;

printf("\n\n\nThe result of Y1=(a==b)!=c is %d",y1);
printf("\n\nThe result of Y2=(a!=b) is %d",y2);
printf("\n\nThe result of Y3=(a>=b) is %d",y3);
printf("\n\nThe result of Y4=(a==b==c)==10 is %d",y4);

printf("\n\n\n\n\n\t\t\t     To Exit Press Enter Key");
getch();

}

