#include<stdio.h>

void main() 
{
   int a, b, i, hcf;

   printf("\nenter the first number : ");
   scanf("%d" ,&a);
   printf("\nenter the second number : ");
   scanf("%d", &b);

   for(i = 1; i <= a || i <= b; i++)
    {
      if( a%i == 0 && b%i == 0 )
         hcf = i;
   }

   printf("\nHCF of %d and %d = %d",a,b, hcf);
}