#include<stdio.h>

void main()
{
   int  sub1,sub2,sub3,sub4,sub5;
   float total,percentage,average;
   printf("\n\nenter the marks for C Language (0-100) : ");
   scanf("%d",&sub1);
   printf("enter the marks for Discrete Mathamatics (0-100) : ");
   scanf("%d",&sub2);
   printf("enter the marks for Microprocessor & Computer Architecture (0-100): ");
   scanf("%d",&sub3);

   total= sub1+sub2+sub3;
   average= total/3.0;
   percentage= (total/300)*100;
   printf("\nThe average marks obtained in 3 subjects is %.2f \n", average);
}