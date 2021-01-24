#include<stdio.h>

void main()
{
   char i;
   printf("\nAlphabets in capital (upper) are : \n");
   for(i='A';i<='Z';i++)
      printf("%c  " , i);
   
   printf("\n\n Alphabets in small (lower) are : \n");
   for(i='a';i<='z';i++)
      printf("%c  " , i);
}