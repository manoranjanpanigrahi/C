

#include<stdio.h>
void main()
{
   float celcius, fahreheit;
   printf("\n Enter the temperature in celcius: ");
   scanf("%f", &celcius);
   fahreheit =(1.8*celcius)+32;
   printf("Temperature in fahrenheit is %.2f\n", fahreheit);
}