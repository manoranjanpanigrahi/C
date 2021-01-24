#include <stdio.h>

int main() 
{
   int rollno[50],marks[50],i,n;

   printf("\nEnter number of students: ");
   scanf("%d", &n);

   for(i=0;i<n;i++)
   { 
      printf("Enter Roll of Student [%d] : ",i+1);
      scanf("%d",&rollno[i]);
      printf("Enter Mark of Student [%d]: ",i+1);
      scanf("%d",&marks[i]);
   }
   printf("\nfollowing is the data entered by the user :- \n");
   for(i=0;i<n;i++)
   {
      printf("\nRoll No : %d , Marks : %d ",rollno[i],marks[i]);
   }
   return 0;
}