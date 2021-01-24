#include<stdio.h>

double square(double num)
{
   return(num*num);
}
void main()
{
   double num, temp;
   printf("\nInput any number for square : ");
   scanf("%lf", &num);

   temp = square(num);
   printf("The square of %2.1lf is = %.2lf \n", num,temp);
}
