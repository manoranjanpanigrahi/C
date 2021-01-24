#include<stdio.h>

void main()
{
   int a,b,c;
   printf("\nenter the first number : ");
   scanf("%d",&a);
   printf("enter the second number : ");
   scanf("%d",&b);
   printf("enter the third number : ");
   scanf("%d",&c);

   int largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

   printf("\nthe largest of %d,%d and %d is  : %d \n", a,b,c,largest);
}