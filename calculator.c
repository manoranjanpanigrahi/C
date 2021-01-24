#include <stdio.h>
void main() 
{
   char operator;
   double first, second;
   printf("\nEnter an operator (+ , - , * , / ): ");
   scanf("%c", &operator);
   printf("\nEnter first operand: ");
   scanf("%lf", &first);
   printf("Enter second operand: ");
   scanf("%lf",&second);

   switch (operator) 
   {
    case '+':
      printf("Addition ----  %.1lf + %.1lf = %.1lf \n", first, second, first + second);
      break;
    case '-':
      printf("Subtraction ----  %.1lf - %.1lf = %.1lf \n", first, second, first - second);
      break;
    case '*':
      printf("Multiplication ----  %.1lf * %.1lf = %.1lf \n", first, second, first * second);
      break;
    case '/':
      printf("Division ----   %.1lf / %.1lf = %.1lf \n", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct");
   }
}