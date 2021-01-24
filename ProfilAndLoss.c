#include<stdio.h>

void main()
{
   float cost_price, selling_price, profit , loss ;

   printf("\nEnter the cost price of the item: ");
   scanf("%f", &cost_price);

   printf("Enter the selling price of the item: ");
   scanf("%f", &selling_price);

   if (selling_price > cost_price)                             //here we get profit on selling item
   {
      profit = selling_price - cost_price;
      printf("\nThe seller has incurred a profit of %.2f""%%", 100 * profit/cost_price);
   }
   else if (selling_price < cost_price)                           //here we get loss on selling item
   {
      loss = cost_price - selling_price;
      printf("\nThe seller has incurred a loss of %.2f""%%", 100 * loss/cost_price);
   }
   else    
   {
      printf("\nWe don't get any loss and profit on selling item");
   }
}