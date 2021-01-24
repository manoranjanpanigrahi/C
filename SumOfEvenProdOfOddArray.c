#include<stdio.h>

void main()
{
   int arr[20],i,n,sum=0,prod=1;

   printf("\nEnter the number of elements in the array : ");
   scanf("%d", &n);
   
   printf("Enter the array Elements : ");
   for(i = 0; i < n; i++)
      scanf("%d", &arr[i]);

   for(i = 0; i < n; i++)
   {
      if (arr[i] % 2 == 0)
         sum = sum+arr[i];
      else
         prod = prod*arr[i];
   }
   printf("\nThe Sum of all even numbers is %d ", sum);
   printf("\nThe Product of all odd numbers is %d \n", prod);
}