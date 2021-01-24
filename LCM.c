#include<stdio.h>

void main()
{
   int num1,num2,max;
   printf("\nenter first number : ");
   scanf("%d", &num1);
   printf("enter second number : ");
   scanf("%d", &num2);

   max= (num1 > num2) ? num1 : num2;                                //storing the largest no. in max

   while (1)
   {
      if(max % num1 == 0 && max % num2 == 0)
      {
         printf("the LCM of %d and %d is : %d \n", num1,num2,max);
         break;
      }
      max++;
   }
}