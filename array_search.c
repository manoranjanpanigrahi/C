#include<stdio.h>
void main()
{
    int arr[10], search, i, size;

    printf("\nEnter number of elements in array: ");
    scanf("%d", &size);

    printf("\nEnter %d elements : ", size);
    for(i=0;i<size;i++)
      scanf("%d", &arr[i]);

    printf("\nEnter the element you want to search:  ");
    scanf("%d", &search);
    for(i=0;i<size;i++)
    {
       if(arr[i]==search)
       {
          printf("element %d is present at index location %d" , search , i+1);
          break;
       }
    }
    if(i==size)
    printf("element %d is not present in the array" , search);
}
