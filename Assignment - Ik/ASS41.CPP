#include "stdio.h"
#include "conio.h"
#include "string.h"

 int compare(char *phrase1, char *phrase2){

  int value = strcmp(phrase1,phrase2);

  if(value==0)
    return 1;
    //printf("\n\nPhrases are same");
  else
    return 0;
    //printf("\n\nPhrases are not same ");

 }


 void main(){
 clrscr();
 char phrase1[20];
 char phrase2[20];

 printf("Enter phrase1: ");
 gets(phrase1);

 printf("\n\nEnter phrase2: ");
 gets(phrase2);

 int value = compare(phrase1, phrase2);

 if(value==1)
   printf("\n\nPhrases are same");
 else
   printf("\n\nPhrases are not same ");

 getch();
 }
