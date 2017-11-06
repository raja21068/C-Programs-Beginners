//PennyBoki @ </dream.in.code>
#include <stdio.h>
#include <conio.h>

int main()
{
  clrscr();
     int A[3][3];
     int B[3][3];
     int C[3][3];
     int X[3][3][3];
     int i,j,m;


     printf("==========Enter matrix A==========\n");
     for(i=0;i<3;i++)
     {     printf("\n");
	  for(j=0;j<3;j++)
	  {
	       printf(" A[%d][%d]= ",i,j);
	       scanf("%d", &A[i][j]);
	       C[i][j]=0;
	  }
     }

     printf("\n==========Enter matrix B==========\n");
     for(i=0;i<3;i++)
     {     printf("\n");
	  for(j=0;j<3;j++)
	  {
	       printf(" B[%d][%d]= ",i,j);
	       scanf("%d", &B[i][j]);
	  }
     }


     for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	  {
	       for(m=0;m<3;m++)
	       {
	       X[i][j][m]=A[i][m]*B[m][j];
	       C[i][j]=C[i][j]+X[i][j][m];
	       }
	  }
     }

     printf("\n==========matrix C==========\n");
     for(i=0;i<3;i++)
     {     printf("\n");
	  for(j=0;j<3;j++)
	  {
	       printf(" C[%d][%d]= %d",i,j,C[i][j]);

	  }
     }
     printf("\n\n");

 getche();
return 0;
}