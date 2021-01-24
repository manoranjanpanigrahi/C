#include <stdio.h>
void main()
{
    int i = 0,j = 0,rows = 0;
    printf("\nEnter the number of rows : ");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    { 
        for(i=j; j<rows; j++)       // Print spaces
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)         // Print star
        {
            printf("*");
        }
        printf("\n");               // Print new line
    }
}