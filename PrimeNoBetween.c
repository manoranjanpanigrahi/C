#include <stdio.h>

void main() 
{
   int low, high, i, flag;

   printf("\nenter the lower limit : ");
   scanf("%d", &low);
   printf("enter the upper limit : ");
   scanf("%d", &high);
   printf("\nPrime numbers between %d and %d are: \n", low, high);

   while (low < high)                                  // iteration until low is not equal to high
   {
      flag = 0;
      for (i = 2; i <= low / 2; ++i)                 // if low is a non-prime number, flag will be 1
      {
         if (low % i == 0) 
         {
            flag = 1;
            break;
         }
      }
      if (flag == 0)
         printf(" %d\t", low);
      low++;                                    // to check prime for the next num increase low by 1
   }
   printf("\n");
}