#include <stdio.h>
void main() 
{
   float pie = 3.14159,Circumference=0;
   int radius;
   printf("\n enter The radius of the circle : ");
   scanf("%d", & radius);
   Circumference = 2* pie* radius;
   printf("\n The Circumference of the given circle is %.2f \n", Circumference);
}