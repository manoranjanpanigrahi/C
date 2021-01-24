#include<stdio.h>

void main()
{
   int arr[10],i,n;

   printf("\nenter the number of elements in the array : ");
   scanf("%d", &n);

   printf("\nenter the elements of the array : ");
   for(i = 0; i < n; i++)
      scanf("%d", &arr[i]);
   
   printf("\nelements in the array Before reversing : ");
   for(i = 0; i < n; i++)
      printf("%d ", arr[i]);

   printf("\nelements in the array After reversing : ");
   for(i = n-1; i >= 0; i--)
      printf("%d ", arr[i]);   
   printf("\n");
}  