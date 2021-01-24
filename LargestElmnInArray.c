#include<stdio.h>
void largest(int n)
{
   int i,arr[10];
   printf("input %d elements of the array : \n",n);
   for(i=0;i<n;i++)
   {
      printf("Element - %d : ",i);
      scanf("%d", &arr[i]);
   }
   
   for(i=1;i<n;i++)
   {
      if(arr[0] < arr[i])
         arr[0] = arr[i];
   }
   printf("the largest element in the array is = %d \n", arr[0]);
}
void main()
{
   int i,n,arr[10];
   printf("\ninput the number of element to be stored in the array : ");
   scanf("%d", &n);
   
   largest(n);
}
