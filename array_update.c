#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[10], n1,n2,i,size;

    printf("\nEnter number of elements in array: ");
    scanf("%d", &size);

    printf("\nEnter %d elements : ", size);
    for(i=0;i<size;i++)
      scanf("%d", &arr[i]);

    printf("\nEnter the element you want to replace:  ");
    scanf("%d", &n1);

    printf("\nEnter the element you want to replace it with:  ");
    scanf("%d", &n2);

    for(i=0;i<size;i++)
    {
       if(arr[i]==n1)
       {
          arr[i]=n2;
       }
    }
    printf("resultant array is : ");
    for(i=0;i<size;i++)
      printf("%d ", arr[i]);
   getch();

}

        
       