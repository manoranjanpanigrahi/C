#include<stdio.h>

void main()
{
   int number;

   printf("\nenter a number : ");
   scanf("%d" , &number);

   if((number % 5 == 0) && (number % 11 == 0))
      printf("\nthe number %d is divisable by 5 and 11\n", number);
   else
   {
      printf("\nthe number %d is not divisable by 5 and 11\n" ,number);
   }
}