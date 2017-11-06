#include "stdio.h"
#include "conio.h"
#include "string.h"

void main(){
    clrscr();

    FILE *fptr;

    char *name; int count=0;

    printf("Enter File Name : ");
    gets(name);

    strcat(name,".txt");

    char ch[80];

    fptr=fopen(name,"r+");


    while(fgets(ch, 80, fptr)!=NULL)
       /*if(ch==(char)32) */count++;

    printf("%d",count);

    fclose(fptr);
    getch();
}