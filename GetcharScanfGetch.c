#include<stdio.h>
#include<conio.h>

void main()
{
   char c, c1, z;

   printf("\n\ninput a character : %c",c);                                          //using getchar
   c= getchar();
   printf("the char is %c",c);

   printf("\n\ninput a character : ");                                              //using getchar
   c1= getch();
   printf("\nthe char is %c",c1);

   printf("\n\nEnter a character : ");                                             //using scanf
   scanf("%s", &z);
}