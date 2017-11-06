#include <conio.h>
#include <stdio.h>


struct Date{
 int date;
}day,month,year;


void main () {
 clrscr();

 printf("Enter date:\n\n");
 printf("Day: ");
 scanf("%d",&day.date);
 printf("Month: ");
 scanf("%d",&month.date);
 printf("Year: ");
 scanf("%d",&year.date);

 printf("\n\nDate: %d/%d/%d",day.date,month.date,year.date);

 getch();
 }