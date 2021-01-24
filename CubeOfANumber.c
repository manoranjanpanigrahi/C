#include<stdio.h>

void main()
{
   int num, n, cube;
   printf("\nEnter the number upto which the cube is required : ");
   scanf("%d", &n);
   for(num = 1; num <=n; num++)                             //loop runs till the enterned number n
   {
      cube = num * num * num;                                        // formula to calculate cube
      printf("\nthe number is:  %d AND the cube is : %d\n",num,cube);
   }
}
