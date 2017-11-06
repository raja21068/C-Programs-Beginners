#include <conio.h>
#include <stdio.h>


int prime(int n){

   int a=0;
   for(int j=1; j<=n; j++)
     if(n%j==0)
       a+=1;

   if(a==2)
     return 1;

 return 0;
}

void main(){
 clrscr();
 int a, prime_no;

  printf("\t\tPRIME NUMBER");

  printf("\n\nEnter any number: ");
  scanf("%d",&a);

  prime_no = prime(a);

  if(prime_no>0)
    printf("\n\n%d is a Prime number",a);
  else
    printf("\n\n%d is a not a Prime number",a);

 getche();

}