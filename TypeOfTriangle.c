#include<stdio.h>

void main()
{
   int side1,side2,side3;

   printf("\nenter the length of the 1st side of the triangle : ");
   scanf("%d", &side1);
   printf("\nenter the length of the 2nd side of the triangle : ");
   scanf("%d", &side2);
   printf("\nenter the length of the 3rd side of the triangle : ");
   scanf("%d", &side3);
   
   if (side1 == side2 && side2 == side3)
      printf("\nas all 3 sides are equal , it is a EQUILATERAL TRIANGLE");  
   else if(side1 == side2 || side1 == side3 || side2 == side3)
      printf("\nas 2 sides of the triangle is equal , it is a ISOSCELES TRIANGLE");
   else
      printf("\nas none of the sides are equal , it is a SCALENE TRIANGLE");
   
}