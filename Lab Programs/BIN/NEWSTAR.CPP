#include"conio.h"
#include"stdio.h"

void main(void)
{
 clrscr();

for(int x=1; x<=2; x++){
 for(int i=5; i>=1; i--){
    for(int a=1; a<=i; a++){
       printf("  ");
    }
    printf("*\n\n");
 }
 for(int j=1; j<=5; j++){
    for(int k=1; k<=j; k++){
       printf("  ");
    }
    printf("*\n\n");
 }
}
  getch();

}