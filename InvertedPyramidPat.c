#include <stdio.h>

void main()
{
   int i, j, rows;

   printf("\nEnter number of rows : ");                        /* Input rows to print from user */
   scanf("%d", &rows);

   for(i=1; i<=rows; i++)
   {
        
      for(j=1; j<i; j++)                                             /* Print leading spaces */
      {
         printf(" ");
      }
       
      for(j=1; j<=(rows*2 -(2*i-1)); j++)                                        /* Print stars */
      {
         printf("*");
      }
        
      printf("\n");                                                         /* Move to next line */
   }
}