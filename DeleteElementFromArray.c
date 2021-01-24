#include <stdio.h>
 
void main()
{
   int array[10], position, i, n, value;
   printf("\nEnter number of elements in array : ");
   scanf("%d", &n);
 
   printf("\nEnter %d elements : ", n);
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
 
   printf("\nEnter the location of the element to be deleted : ");
   scanf("%d", &position);
   
   if(position >= n+1)
      printf("Invalid position!!! enter correct position");
   else
   {
      for (i = position-1; i < n-1; i++)
         array[i] = array[i+1];
      
      n--;

      printf("\nelements after deletion are : ");
      for (i = 0; i < n; i++)
         printf("%d ", array[i]);
   }
   printf("\n");
}