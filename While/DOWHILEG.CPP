 #include "stdio.h"
 #include "conio.h"

 void main () {

 clrscr();

 char ch, ans;

	printf("\n\n\t\tGuessing Game!");

	printf("\nEnter any character you want to play with: ");
	scanf("%c",&ch);

	do {

	printf("\nEnter character to guess the right answer: ");
	scanf("%c",&ans);
	while ( (ch=getch()) != ans)
		{
		printf("sorry, %c is incorrect",ans);
		printf("\nTry again.");
		}        // End of while
	   printf("\nThats it!");
	   printf("\nPlay again? (Type 'y' or 'n'): ");
	   }
	while ( getch() == 'y');
	 printf("\nThanks for playing!");
	} // End of while


