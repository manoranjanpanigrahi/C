#include<stdio.h>
void series();
void main()
{
   printf("\nthe given series is : 1!/1+2!/2+3!/3+4!/4+5!/5 ");
   series();
}
void series()
{
   int sum = 1/1+2*1/2+3*2*1/3+4*3*2*1/4+5*4*3*2*1/5;
   printf("\nthe sum of the series is : %d\n", sum);
}