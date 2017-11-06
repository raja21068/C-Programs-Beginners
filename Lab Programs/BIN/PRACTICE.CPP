#include"stdio.h"
#include"conio.h"
#include"String.h"

void main(void){
clrscr();
char A[10];
char B[10];

printf("Enter Name: ");
scanf("%s",&A);

printf("Enter Name: ");
scanf("%s",&B);

strcat(A,B);

printf("%s",A);
getch();

}