#include<stdio.h>
 
void main()
{
   int num;
 
   printf("\nEnter a number : ");
   scanf("%d",&num);
 
   num%2 == 0 ? printf("Entered Number is a Even number\n") : printf("Entered Number is a Odd number\n");

}