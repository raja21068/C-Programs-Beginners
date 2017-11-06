 #include "stdio.h"
 #include "conio.h"

 void factorial(int number){
  long ans;

  ans=1;

  while (number>0)
    ans=ans*number--;
  printf("\nFactorial is: %ld\n",ans);

 }

 void main () {
  clrscr();
  int number;

  printf("Enter any number:");
  scanf("%d",&number);

  factorial(number);

  getch();

 } // End of main