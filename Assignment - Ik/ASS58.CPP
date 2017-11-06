#include "stdio.h"
#include "conio.h"

void box();

void main(){
 clrscr();

 box();

 printf("\n\xdb                 \xdb");
 printf("\n\xdbMEHRAN UNIVERSITY\xdb\n");
 printf("\xdb                 \xdb\n");

 box();
 getch();
}

void box(){
 int a;

 for(a=0; a<=18; a++)
   printf("\xdb");

}