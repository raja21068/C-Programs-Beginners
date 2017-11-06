#include"stdio.h"
#include"conio.h"

void middleLine(int);
void line(int, char, char);

void main(){
    clrscr();
    int x, y;

    printf("Enter X-Axis: ");
    scanf("%d", &x);

    printf("Enter Y-Axis: ");
    scanf("%d", &y);

    line(y, (char)218, (char)191);
    for(int i = 2; i < x; i++){
	middleLine(y);
    }
    line(y, (char)192, (char)217);

    getch();
}

void line(int y, char ch1, char ch2){
   printf("%c", ch1);
   for(int i = 2; i < y; i++){
       printf("%c", (char)196);
   }
   printf("%c\n", ch2);
}

void middleLine(int y){
   printf("%c", (char)179);
   for(int i = 2; i < y; i++){
       printf(" ");
   }
   printf("%c\n", (char)179);
}
