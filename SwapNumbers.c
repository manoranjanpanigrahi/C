#include<stdio.h>
void swap(int,int);
void main()
{
   int n1,n2;
   printf("\nInput 1st number : ");
   scanf("%d", &n1);
   printf("Input 2nd number : ");
   scanf("%d", &n2);
   printf("\nBefore swapping : n1 = %d , n2 = %d",n1,n2);
   swap(n1,n2);
}
void swap(int n1,int n2)
{
   int temp;
   temp = n1;
   n1 = n2;
   n2 = temp;
   printf("\nAfter swapping : n1 = %d , n2 = %d\n",n1,n2);
}