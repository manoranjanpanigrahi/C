#include<stdio.h>

void main()
{
   int arr[50], sum = 0,i,n;

   printf("\nEnter the number of elements in an array : ");
   scanf("%d", &n);

   printf("\nEnter the elements values in the array : ");
   for(i = 0; i < n; i++)
      scanf("%d", &arr[i]);
   
   for(i = 0; i < n; i++)
      sum += arr[i];
   
   printf("\nSum of elements in the array is = %d\n",sum);
}