#include<stdio.h>

void main()
{
   int sub1,sub2,sub3,sub4,sub5,total,grand_total,division;
   float percentage;

   printf("\nenter the marks for PHYSICS out of 100      : ");
   scanf("%d", &sub1);
   printf("enter the marks for CHEMISTRY out of 100    : ");
   scanf("%d", &sub2);
   printf("enter the marks for BIOLOGY out of 100      : ");
   scanf("%d", &sub3);
   printf("enter the marks for MATHAMETICS  out of 100 : ");
   scanf("%d", &sub4);
   printf("enter the marks for COMPUTER  out of 100    : ");
   scanf("%d", &sub5);
   printf("\nenter the grand toal marks for 5 subjects : ");
   scanf("%d", &grand_total);

   total = sub1 + sub2 + sub3 + sub4 + sub5;

   percentage = total * 100 / grand_total;

   printf("\nthe total percentage is %.2f AND ", percentage);

   if(percentage >= 90.00)
      printf("GRADE A");
   else if(percentage >= 80.00)   
      printf("GRADE B");
   else if(percentage >= 70.00) 
      printf("GRADE C");
   else if(percentage >= 60.00)   
      printf("GRADE D");
   else if(percentage >= 40.00) 
      printf("GRADE E");
   else
      printf("GRADE F");
}