#include<stdio.h>

void main()
{
   int sub1,sub2,sub3,total,grand_total,division;
   float percentage;

   printf("\nenter the marks for subject 1 out of 100 : ");
   scanf("%d", &sub1);
   printf("\nenter the marks for subject 2 out of 100 : ");
   scanf("%d", &sub2);
   printf("\nenter the marks for subject 1 out of 100 : ");
   scanf("%d", &sub3);
   printf("\nenter the grand toal marks : ");
   scanf("%d", &grand_total);

   total = sub1 + sub2 + sub3;

   percentage = total * 100 / grand_total;

   printf("\nthe total percentage is %.2f ", percentage);

   if(percentage >= 60.00)
      printf("and you have scored FIRST DIVISION!!");
   else if(percentage >= 50.00)   
      printf("and you have scored SECOND DIVISION!!");
   else if(percentage >= 40.00) 
      printf("and you have scored THIRD DIVISION!!");
   else
      printf(" and you are FAILED");
}