#include"conio.h"
#include"stdio.h"

void main(void)
{
  clrscr();
  int a,sum1=0;
  int b,sum2=0;
  int c,sum3=1;
  int d;
  float sum4=1;

  for(a=1; a<=15; a+=2)
  {
    printf("%d+",a);
    sum1+=a;
  }
  printf("\n\nThe sum of odd no. is %d",sum1);
  printf("\n\n\n\n");

  for(b=3; b<=99; b+=3)
  {
    printf("%d+",b);
    sum2+=b;
  }
  printf("\n\nThe sum is %d",sum2);
  printf("\n\n\n\n");

  for(c=1; c<=10; c++)
  {
    printf("%dx",c);
    sum3*=c;
  }
  printf("\n\nThe Multiplication is %d",sum3);
  printf("\n\n\n\n");

  for(d=2; d<=30; d+=2)
  {
    printf("%dx",d);
    sum4*=d;
  }
  printf("\n\nThe Multiplication is %e",sum4);

  getch();

}