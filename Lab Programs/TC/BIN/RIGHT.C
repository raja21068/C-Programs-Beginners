void main(){

   int num,i,j;
   clrscr();

   printf("Enter Last Number: ");
   scanf("%d",&num);

   for(i=1; i<=num; i++){

      for(j=1; j<=i; j++)
	printf("%d",j);

      printf("\n");
   }
   getch();

}