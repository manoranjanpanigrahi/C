#include<stdio.h>  
 void main()    
{    
   int num,sum=0,modulus;    
   printf("\nEnter a number : ");    
   scanf("%d",&num);    
   
   while(num>0)    
   {    
      modulus=num%10;    
      sum=sum+modulus;    
      num=num/10;    
   }    
   printf("\nSum of digits of the entered number is = %d\n",sum); 
}    