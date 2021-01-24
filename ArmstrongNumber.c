#include<stdio.h>

int armstrong(int num)
{
   int OriNum,remainder,result=0;
   OriNum = num;
   while(OriNum>0)
   {
      remainder = OriNum%10;                            //remainder contains the last digit 
      result = result+(remainder*remainder*remainder);
      OriNum = OriNum/10;                                 //removing last digit from the number
   }
   if(result==num)
      return 1;
   else
      return 0;
}

void main()
{
   int i,n;
   printf("\nenter the upper limit to check armstrong : ");
   scanf("%d", &n);
   printf("the armstrong number from 1 to %d is : ", n);
   for(i=1 ; i<=n ; i++)
   {
      if(armstrong(i))
         printf("%d  ", i);
   }
   printf("\n");
}