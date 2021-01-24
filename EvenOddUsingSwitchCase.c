#include<stdio.h>

void main()
{
   int number ;
   printf("\nenter a number : ");
   scanf("%d", &number);

   switch(number%2)
   {
      case 0:
             printf("%d is an Even Number\n", number);
             break;
      case 1:
             printf("%d is an Odd Number\n", number);
             break;
   }
}