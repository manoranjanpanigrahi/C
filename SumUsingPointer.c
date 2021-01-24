#include<stdio.h>

void main()
{
   int a,b,*a1,*b1,sum;
   printf("\nEnter 1st number : ");
   scanf("%d",&a);
   printf("Enter 2nd number : ");
   scanf("%d",&b);

   a1 = &a;
   b1 = &b;

   sum = *a1 + *b1;
   printf("\nThe sum of %d and %d = %d \n", a , b, sum);
}