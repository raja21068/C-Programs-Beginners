#include "stdio.h"
#include "conio.h"
#include "string.h"

 int upper(char *phrase){

 strupr(phrase);
 printf("\n\n%s",phrase);
 }


void main(){
 clrscr();

 char phrase[20];

 printf("Enter any phrase: ");
 gets(phrase);

 upper(phrase);
getch();
}
