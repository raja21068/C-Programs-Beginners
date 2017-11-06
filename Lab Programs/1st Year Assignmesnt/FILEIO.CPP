//Q 8

#include "stdio.h"
#include "conio.h"
#include "string.h"

void main(){
    clrscr();

    FILE *fptr;

    char *name;

    printf("Enter File Name : ");
    gets(name);

    strcat(name,".txt");

    char ch;
    int count=0;

    fptr=fopen(name,"r");

    while((ch=getc(fptr))!=EOF)
       if(ch==(char)32) count++;

    printf("%d",count);

    fclose(fptr);
    getch();
}