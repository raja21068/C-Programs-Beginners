#include "stdio.h"
#include "conio.h"
#include "string.h"

 int palindrome(char *strn){

  int flag = 1;
  int j = (strlen(strn)-1);

  for(int i = 0; i<=(strlen(strn)/2); j--, i++){
    if(strn[i] != strn[j]){
      flag = 0;
      break;
    }
  }

  if(flag)
    return 1;
  else
    return 0;

 }


 void main(){
 clrscr();
 char strn[20];

 printf("Enter any Integer: ");
 gets(strn);

 int value = palindrome(strn);

 if(value==1)
   printf("Given String is Palindrome...");
 else
   printf("Given String is not Palindrome...");

 getch();
 }
