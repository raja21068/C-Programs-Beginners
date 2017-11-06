
#include "conio.h"
#include "stdio.h"

int Matrix [3][3] =
{
  {1,2,3},
  {4,5,6},
  {7,8,9}

};


int Matrix2 [3][3] =
{
  {0,2,1},
  {2,3,4},
  {4,3,5}

};


int Result [3][3];
void main (void)
{
    clrscr();

    int i;
    int j;

    for (i = 0; i<=2;i++)
    {
    for (j = 0; j<=2;j++)
     Result[i][j]= Matrix[i][j] + Matrix2[i][j];
    }

    getch();

    printf("\n\n\nContents of  Matrix1\n");

    for (i = 0; i<=2;i++)
    {
    for (j = 0; j<=2;j++)
     printf ("%d ",Matrix[i][j]);
     printf ("\n");
     }

     getch();


     printf("\n\n\nContents of  Matrix2\n");

    for (i = 0; i<=2;i++)
    {
    for (j = 0; j<=2;j++)
     printf ("%d ",Matrix2[i][j]);
     printf ("\n");
     }

     getch();



    printf("\n\n\nAddition of  Matrices\n");

    for (i = 0; i<=2;i++)
    {
    for (j = 0; j<=2;j++)
     printf ("%d ",Result[i][j]);
     printf ("\n");
     }

     getch();


     printf("\n\n\n\nTranspose of Result Matrix\n");

     for (i = 0; i<=2;i++)
    {
    for (j = 0; j<=2;j++)
     printf ("%d ",Result[j][i]);
     printf ("\n");
     }

     getch();

}