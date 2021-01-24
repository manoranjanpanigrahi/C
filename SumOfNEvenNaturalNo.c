#include<stdio.h>

void main()
{
   int sum = 0,i,n;

   printf("\nEnter the number of terms : ");
   scanf("%d" , &n);

   printf("\nEven number of 1st %d terms are : ",n);
   for(i = 1; i <= n; i++)
   {
      if(i % 2 == 0)
      {
         printf("%d ", i);
         sum += i;
      }
   }
   printf("\n\nThe sum of even natural number upto %d term = %d \n", n , sum);
}