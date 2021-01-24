#include<stdio.h>
void main()
{
    int array[100], position, i, size, value;

    printf("\nEnter number of elements in array: ");
    scanf("%d", &size);

    printf("\nEnter %d elements : ", size);
    for(i=0;i<size;i++)
        scanf("%d", &array[i]);

    printf("\nEnter the location where you want to insert new element:  ");
    scanf("%d", &position);

    printf("\nEnter the value to insert: ");
    scanf("%d", &value);
      
    for(i=size-1;i>=position-1;i--) 
        array[i+1] = array[i];
        
    array[position-1] = value; 
   
    printf("\nResultant array is: ");
    for(i=0;i<=size;i++)
        {
           printf("%d ", array[i]);
        }
}