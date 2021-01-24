#include<stdio.h>
void main()
{
   float km,mtr,cm,inch;
   printf("Enter the Kilometer : ");
   scanf("%f", &km);

   mtr = km * 1000;
   printf("the Meter conversion is : %f", mtr);
  
   cm = mtr*100;
   printf("\n the centimeter conversion is : %f", cm);
  
   inch = cm*2.54;
   printf("\n the inch conversion is : %2f", inch);

}