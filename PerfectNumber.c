#include <stdio.h>

void  main()
{
  int num,i,sum=0;
  printf("\nInput the  number : ");
  scanf("%d",&num);
  printf("The positive divisors are : ");
    for (i=1;i<num;i++)
      {
      if(num%i==0)
         {
         sum=sum+i;
         printf("%d  ",i);
         }
       }
   printf("\nThe sum of the divisors is : %d",sum);
    if(sum==num)
      printf("\n so, %d is a perfect number \n", num);
    else
      printf("\n so, %d is not a perfect number \n", num);
}