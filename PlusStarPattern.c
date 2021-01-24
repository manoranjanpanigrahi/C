#include <stdio.h>
void main()
{
   int i, j, n;
   printf("\nEnter a number: ");
   scanf("%d", &n);
   for(i=1; i<=(n * 2 - 1); i++)               // Run an outer loop from 1 to N*2-1
    {
       if(i == n)                                 // For the center horizontal plus
         {
            for(j=1; j<=(n * 2 - 1); j++)
            {
               printf("+");
            }
         }
        else
        {
         for(j=1; j<=n-1; j++)                // For spaces before single plus sign
            {
               printf(" ");
            }
         printf("+");
      }
   printf("\n");
    }
}