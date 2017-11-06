#include "stdio.h"
#include "conio.h"
#include "string.h"

 int lower(char *phrase){

 strlwr(phrase);
 printf("\n\n%s",phrase);
 }


void main(){
 clrscr();

 char phrase[20];

 printf("Enter any phrase: ");
 gets(phrase);

 lower(phrase);
getch();
}
