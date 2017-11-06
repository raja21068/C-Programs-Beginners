#include"stdio.h"
#include"conio.h"

int factorial(int);

void main()
{
  clrscr();
  int number = 0;

  printf("\nEnter an integer value: ");
  scanf(" %d", &number);
  printf("\nThe factorial of %d is %d\n", number, factorial(number));

  getch();
}

int factorial(int N)
{
  if( N < 2 )
    return N;
  else
    return N*factorial(N - 1);
}