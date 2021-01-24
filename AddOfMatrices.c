#include<stdio.h>
int main()
{
   int i,j,row,column,First[10][10],Second[10][10],Sum[10][10];
   printf("\nEnter the row and column for the Matrix : ");
   scanf("%d %d", &row , &column);

   printf("\nEnter the elements of the first matrix : ");
   for(i=0;i<row;i++)
      for(j=0;j<column;j++)
         scanf("%d", &First[i][j]);

   printf("\nEnter the elements of the second matrix : ");
   for(i=0;i<row;i++)
      for(j=0;j<column;j++)
         scanf("%d", &Second[i][j]);

   printf("\n The sum of the 2 matrices are : \n");
   for(i=0;i<row;i++)
   {
      for(j=0;j<column;j++)
         {
            Sum[i][j] = First[i][j] + First[i][j];
            printf("%d\t", Sum[i][j]);
         }
         printf("\n");
   }
   return 0;
}