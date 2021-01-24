#include <stdio.h>

void main()
{
   char ch;

   printf("\nEnter a character: ");
   scanf("%c", &ch);

   if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
   {
      printf("\n'%c' is alphabet.\n", ch);
   }
   else if(ch >= '0' && ch <= '9')
   {
      printf("\n'%c' is digit.\n", ch);
   }
   else 
   {
      printf("\n'%c' is special character.\n", ch);
   }
}