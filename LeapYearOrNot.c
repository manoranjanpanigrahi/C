#include<stdio.h>

void main()
{
   int year;
   printf("\nenter a year : ");
   scanf("%d", &year);

   (year%4 == 0)?printf("%d is a leap year  \n", year) : printf("%d is not a leap year \n" , year);
}