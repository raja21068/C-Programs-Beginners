#include"stdio.h"
#include"conio.h"
#include"math.h"

void main(){
   clrscr();
   int post_no;
   int pre_no=0;
   int temp[2];
   char *colors[] = {"Black",
		     "Brown",
		     "Red",
		     "Orange",
		     "Yellow",
		     "Green",
		     "Blue",
		     "Violet",
		     "Gray",
		     "White"};

   int size = sizeof(colors)/2; //sizeof(colors)/sizeof(int);
   for(int i=0; i<size; i++){
      printf("%d: %s\n", i, colors[i]);
   }
   printf("Enter Values : ");
   scanf("%d", &post_no);

   temp[0] = post_no/100;
   pre_no += (temp[0]*10);
   post_no = post_no%100;
   temp[1] = post_no/10;
   pre_no += temp[1];
   post_no = post_no%10;

   long multi = pre_no*pow(10, post_no);
   printf("%de%d",pre_no, post_no);
   printf("\n%ld",multi);

   getch();
}