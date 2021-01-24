#include <stdio.h>

int main() 
{
   int math[50],english[50],total[50],i,n;

   printf("\nEnter number of students: ");
   scanf("%d", &n);

   for(i=0;i<n;i++)
   { 
      printf("\n");
      printf("Enter Mathematics marks for students no. [%d]  : ",i+1);
      scanf("%d",&math[i]);
      printf("Enter English marks for students no. [%d] : ",i+1);
      scanf("%d",&english[i]);
      total[i] = math[i] + english[i];
   }
   printf("\nfollowing is the data entered by the user :- \n");
   for(i=0;i<n;i++)
   {
      printf("\nTotal of student %d = %d[Mathamatics %d + English %d]\n",i+1,total[i],math[i],english[i]);
   }
   return 0;
}