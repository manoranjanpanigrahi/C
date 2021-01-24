#include <stdio.h>
#include <math.h>

void main()
{
   int num, swappedNum;
   int firstDigit, lastDigit, digits;

   printf("\nEnter any number : "); /* Input number from user */
   scanf("%d", &num);

   lastDigit  = num % 10;  /* Find last digit */

   digits     = (int)log10(num);   /* Find total number of digit - 1 */

   firstDigit = (int)(num / pow(10, digits));  /* Find first digit */

   swappedNum  = lastDigit;
   swappedNum *= (int) pow(10, digits);
   swappedNum += num % ((int) pow(10, digits));
   swappedNum -= lastDigit;
   swappedNum += firstDigit;

   printf("\nOriginal number = %d", num);
   printf("\nNumber after swapping first and last digit : %d\n", swappedNum);
}