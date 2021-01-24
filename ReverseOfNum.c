#include<stdio.h>

void main()
{
   int rev=0,remainder,num;
   printf("\nenter a number : ");
   scanf("%d", &num);
   while(num!=0)
   {
      remainder = num%10;
      rev = rev*10 + remainder;
      num = num/10;
   }
   printf("reverse of the entered number is : %d \n" , rev);
}