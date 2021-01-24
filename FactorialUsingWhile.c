#include<stdio.h>
void main()
{
    int num,i=1,fact=1;
    printf("\n Enter a Number: ");
    scanf("%d",&num);
     
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("\nThe Factorial of %d is %d \n",num,fact);
}