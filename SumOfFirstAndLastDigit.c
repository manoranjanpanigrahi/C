#include <stdio.h>
void main()
{
   int n, sum=0, firstDigit, lastDigit;
   printf("\nEnter a number having more than 1 digit :  ");
   scanf("%d", &n);
   
   lastDigit = n % 10;                                                // Find last digit of a number
   
   while(n >= 10)                 //Find the first digit by dividing n by 10 until n greater then 10
   {
      n = n / 10;
   }
   
   firstDigit = n;
   printf("\nfirst digit = %d \nlast digit = %d\n", firstDigit,lastDigit);

   int SumOfDigit = firstDigit + lastDigit;

   printf("sum of first digit (%d) and last digit (%d) is : %d\n",firstDigit,lastDigit,SumOfDigit);
}