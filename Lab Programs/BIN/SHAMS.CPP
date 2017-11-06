#include "stdio.h"
#include "conio.h"
#define Error printf("Error!!!!")

int Largest(int a, int b, int c)
{
if(a>b&&a>c)
return a;
else
if(b>a&&b>c)
return b;
else
if(c>b&&c>a)
return c;
}

void main(void)
{
int a,b,c;
int Function;

clrscr();
printf("Input three variables: ");
scanf("%d %d %d",&a,&b,&c);

Function=Largest(a,b,c);

if(a==b&&a==c)
 Error;
 else
  if(b==a&&b==c)
   Error;
   else
    if(c==a&&c==b)
     Error;
     else
      printf("Largest value is %d",Function);

getch();

}