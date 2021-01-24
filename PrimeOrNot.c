#include<stdio.h>  
void main()
{    
   int num,i,flag=0;    
   printf("\nEnter the number to check prime : ");    
   scanf("%d",&num); 
   for(i=2;i<=num/2;i++)    
   {    
      if(num%i==0)    
         {    
            printf("%d is not prime \n", num);    
            flag=1;    
            break;    
         }    
   }    
   if(flag==0)    
   printf("%d is prime \n", num);    
}    