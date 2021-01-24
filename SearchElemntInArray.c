#include <stdio.h>

int main()
{
   int arr[20];
   int size, i, toSearch, found;

   printf("\nEnter size of array : ");    //Input size of array
   scanf("%d", &size);

   printf("\nEnter elements in array : "); //Input elements of array
   for(i=0; i<size; i++)
      scanf("%d", &arr[i]);

   printf("\nEnter element to search : ");
   scanf("%d", &toSearch);

   found = 0;   //Assume that element does not exists in array 
    
   for(i=0; i<size; i++)
   {
   //If element is found in array then raise found flag and terminate from loop.
      if(arr[i] == toSearch)
      {
         found = 1;
         break;
      }
   }
    
   if(found == 1) // If element is not found in array
      printf("\n%d is found at position %d", toSearch, i + 1);
   else
      printf("\n%d is not found in the array", toSearch);
   return 0;
}