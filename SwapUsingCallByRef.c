#include<stdio.h>
void swap(int *a,int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
   printf("\nafter swapping a = %d , b = %d\n",*a,*b);
}
void main()
{
   int a,b;
   printf("enter 1st number : ");
   scanf("%d",&a);
   printf("enter 2nd number : ");
   scanf("%d",&b);
   printf("\nbefore swapping a = %d , b = %d",a,b);
   swap(&a,&b);
}