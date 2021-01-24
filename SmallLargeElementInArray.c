#include<stdio.h>

void main()
{
   int arr[50],i,n,large,small;

   printf("Enter the number of Elements in the Array : ");
   scanf("%d", &n);
   printf("\nEnter the Elements : \n");
   for(i = 0; i < n; i++)
      scanf("%d", &arr[i]);
   
   large = small = arr[0];

   for(i = 1; i < n; i++)
   {
      if (arr[i] > large)
         large = arr[i];
      
      if (arr[i] < small)
         small = arr[i];
   }

   printf("\nThe smallest number in the array is %d ", small);
   printf("\nThe largest number in the array is %d \n", large);
      
}