#include<stdio.h>
void main()
{
    int arr[10], pos, i, size, value;

    printf("\nEnter number of elements in array: ");
    scanf("%d", &size);

    printf("\nEnter %d elements : ", size);
    for(i=0;i<size;i++)
      scanf("%d", &arr[i]);

    printf("\nEnter the location where you want to delete the element:  ");
    scanf("%d", &pos);
    for(i=pos-1;i<size-1;i++)
      arr[i]=arr[i+1];
   
    printf("\nResultant array is: ");
    for(i=0;i<size-1;i++)
        {
           printf("%d ", arr[i]);
        }
}