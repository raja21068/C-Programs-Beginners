
void main(){
 int table, start, end,i;
  clrscr();
  printf("write a table Number:");
  scanf("%d",&table);
  printf("Starting Number:");
  scanf ("%d",&start);
  printf("Ending Number");
  scanf("%d",&end);


   for (i=start; i<=end; i++){

      printf("%d X %2d = %2d\n",table,((i*2)-1),(table*((i*2)-1)));

      delay (1000);
   }


  getch();
}