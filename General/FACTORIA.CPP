 #include "stdio.h"
 #include "conio.h"

 void main () {

 clrscr();

 long num=1, ans;

	printf("\nFactorial Software\n");
	printf("\nEnter 0 to exit the program\n");

	while (num != 0)

	{
		printf("\n\tEnter the number: ");
		scanf("%ld",&num);
		ans=1;

		while (num>1)

			ans=ans*num--;
			printf("\tFactorial is: %ld\n",ans);
		} // End of While
	getch();

	} // End of main