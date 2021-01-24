#include<stdio.h>

void main()
{
   int arr[50],n,i;

   printf("\nenter the number of elements in the array : ");
   scanf("%d", &n);

   printf("\nEnter the elements of array : ");
   for(i = 0; i < n; i++)
      scanf("%d" , &arr[i]);
   
   for(i = 1; i < n; i++)
   {
      if(arr[0] > arr[i])
         arr[0] = arr[i];
   }
   printf("\nSmallest number in the array is : %d\n" , arr[0]);
}
