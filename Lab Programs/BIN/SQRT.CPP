#include<conio.h>
#include<stdio.h>


double abs(double n)
{
  if( n >= 0 )
     return n;
  else
     return -n;
}

double sqrt(double n)
{
  double num = n / 2;
  const double range = 1.0e-7;

  do

     num = (num + n / num) / 2;
  while( abs(num * num - n) > range);

  return num;
}

void main()
{       clrscr();

  printf("%f" , sqrt(25.0));

  getch();
}
