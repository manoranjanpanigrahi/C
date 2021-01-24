#include<stdio.h>

void main()
{
   int i,sum=0;
   for(i=1;i<=10;i++)
   {
      if(i%2==0)
      {
         printf("\n%d\t ",i);
         sum = sum+i;
      }
   }
    printf("\nSum of even numbers in range 1 to 10 is : %d\n ",sum);
}