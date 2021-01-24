#include<stdio.h>
void main()
{
   int n,i,fact,j;
   printf("\nEnter the Number : ");
   scanf("%d",&n);
   printf("Prime Numbers are : ");
   for(i=1; i<=n; i++)
   {
      fact=0;
      for(j=1; j<=n; j++)
      {
         if(i%j==0)
            fact++;
      }
      if(fact==2)
         printf("%d " ,i);
   }
   printf("\n");
}