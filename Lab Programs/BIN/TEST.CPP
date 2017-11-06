#include"conio.h"
#include"stdio.h"

void main(void)
{
 int a;
 clrscr();

 printf("Enter no.");
 scanf("%d",&a);

 switch(a)
 {
  case 1:
  printf("One");
  break;

  case 2:
  printf("Two");
  break;

  case 3:
  printf("Three");
  break;

  case 4:
  printf("Four");
  break;

  case 5:
  printf("Five");
  break;

  case 6:
  printf("Six");
  break;

  default:
  printf("Invalid No");
 }
  getch();


}