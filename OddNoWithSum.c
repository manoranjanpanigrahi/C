#include<stdio.h>

void main()
{
   int n,num,sum=0;
   printf("\nEter the number upto which the odd number is required : ");
   scanf("%d", &n);
   printf("\nOdd number upto %d is : ", n);
   for(num = 1; num <= n; num++)                       // loop will run till user inputed value of n
   {
      if( num%2 != 0 )                                       // condition to check if number id odd
      {
         printf("%d ",num);
         sum = sum + num ;                                         // calculating sum of odd number
      }
   }
   printf("\nthe sum of odd number upto %d is : %d \n",n,sum);
}