#include <stdio.h>
int main() 
{
    int n,count=0;
    printf("\nEnter an integer: ");
    scanf("%d", &n);
 
    // iterate until n becomes 0
    // remove last digit from n in each iteration
    // increase count by 1 in each iteration
    while (n != 0) 
   {
      n = n/10;      
      count++;
   }
   printf("\nNumber of digits: %d \n", count);
}