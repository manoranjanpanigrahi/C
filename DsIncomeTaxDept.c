#include<stdio.h>

int i,n;                                                //global variable 
struct Income_Tax_department                           //defining a income tax department structure
{
   char name[30],addr[50],paid_or_not,save;
   int TaxNumber,TaxAmt;
}s[200];
void status()                                  //status funtion for tax payers current paying status
{
   if(s[i].TaxAmt>=20000)
      printf("\nStatus of Tax To be paid is High!!");
   else if(s[i].TaxAmt >= 10000 && s[i].TaxAmt <=20000 )
      printf("\nStatus of Tax To be paid is Medium!!");
   else if(s[i].TaxAmt <= 10000)
      printf("\nStatus of Tax To be paid is Low!!");  
   else
      printf("\nstatus cannot be found,recheck the amount");
   printf("\n");
}
void main()                                              //main function
{
   printf("\nfor how many users you want to enter the data : ");   //how many time the loop will run
   scanf("%d", &n);
   for(i=0;i<n;i++)                                                  //asking for data to be entered
   {
      printf("\n");
      printf("Enter the Tax holders name      : ");
      scanf("%s", &s[i].name);  
      printf("Enter Tax holders address       : ");
      scanf("%s", &s[i].addr);
      printf("Enter valid Income Tax Number   : ");
      scanf("%d", &s[i].TaxNumber);
      printf("Enter the Tax Amount to be paid : ");
      scanf("%d", &s[i].TaxAmt);
      printf("is last years Tax paid ? Y or N  : ");
      scanf("%s", &s[i].paid_or_not);
      if(s[i].paid_or_not == 'y'|| s[i].paid_or_not == 'Y')
         printf("Tax for the last year is paid. ");
      else if(s[i].paid_or_not == 'n'|| s[i].paid_or_not == 'N')
         printf("Tax for the last year is not paid. ");
      else
         printf("Error fetching last years payment status");
      status();                                                         //calling status function 
   }
   
   printf("\n----------INCOME TAX DEPARTMENT RECORDS----------\n");     //printing the data entered
   for(i = 0; i < n ; i++)                                  
   {
      printf("\n");
      printf("\nTax holders name          : %s",s[i].name);  
      printf("\nTax holders address       : %s",s[i].addr);
      printf("\nIncome Tax Number         : %d",s[i].TaxNumber);
      printf("\nTax Amount to be paid     : %d",s[i].TaxAmt);
      printf("\nLast year tax status is   : %c",s[i].paid_or_not);
      status();                                                    //calling status function
      printf("\n");
   }
}

