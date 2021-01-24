#include<stdio.h>

void main()
{
   int fact,*fact1,i,n;
   printf("Enter the number to find it's factorial : ");
   scanf("%d",&n);

   *fact1 = 1;

   for(i=1;i<=n;i++)
      *fact1=*fact1 * i;
   
   printf("The factorial of %d = %d\n",n,*fact1);
}