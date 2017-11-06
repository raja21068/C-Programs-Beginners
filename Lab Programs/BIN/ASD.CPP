#include"conio.h"
#include"stdio.h"

void main(void)
{

int birthYear, currentYear, myAge, Days, Month;

clrscr();

printf ("enter the birthYear: ");
scanf ("%d", & birthYear);

printf ("enter the currentYear: ");
scanf ("%d", & currentYear);

myAge=currentYear-birthYear;

printf ("\n U r now %d years old",myAge);

Days=myAge*365;

printf ("\n\n U r now %d Days old", Days);

Month=Days/30;

printf ("\n U r now %d months old", Month);

getch();

}