#include<stdio.h>
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return( Fibonacci(n-1) + Fibonacci(n-2) );
} 
 
int main()
{
   int n, i = 0, c;
   printf("\nenter the term upto which the fibonacci series is required : ");
   scanf("%d",&n);
   printf("\nFibonacci series : ");
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\t", Fibonacci(i));
      i++; 
   }
   printf("\n");
   return 0;
}
 
