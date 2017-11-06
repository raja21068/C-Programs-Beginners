#include <conio.h>
#include <iostream.h>
#include <string.h>
#include <stdio.h>

void main () {

    clrscr();

    int length,length2;
    char *name;
    char *name2;

    cout<<"\nEnter your Name: ";
    gets(name);

    cout<<"\n\n";

    cout<<"\nEnter your Father Name: ";
    gets(name2);

   length=strlen(name);
   length2=strlen(name2);

   if (length > length2)
	cout<<"\n\nYour name is greater.";
   else
   if (length2 > length)
	cout<<"\n\nYour Father name is greater.";
   else
	cout<<"\n\nBoth names are equal.";

   getch();

}