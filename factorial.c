#include<stdio.h>

void main()
{
   int i,fact=1,num;

   printf("\nEnter a number : ");
   scanf("%d",&num);
   
   for(i=1;i<=num;i++)
      fact=fact*i;

   printf("\nfactorial of %d is %d\n ", num,fact );
}