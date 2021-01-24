#include <stdio.h>
 
int main()
{
   int array[100], position, c, n, value;
   printf("\nEnter number of elements in array : ");
   scanf("%d", &n);
 
   printf("Enter %d elements : ", n);
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("\nEnter the location where you wish to insert an element : ");
   scanf("%d", &position);
 
   printf("\nEnter the value to insert : ");
   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
 
   array[position-1] = value;
 
   printf("\nResultant array is : ");
 
   for (c = 0; c <= n; c++)
      printf("%d ", array[c]);
 
   return 0;
}