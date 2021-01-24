#include <stdio.h>
void main()
{
    int i, n, FirstTerm = 0, SecondTerm = 1, NextTerm;

    printf("\nEnter the number of terms upto which fibonacci series is required: ");
    scanf("%d", &n);
    printf("\nFibonacci Series: ");

    for (i = 1; i <= n; ++i) 
    {
        printf("%d, ", FirstTerm);
        NextTerm = FirstTerm + SecondTerm;
        FirstTerm = SecondTerm;
        SecondTerm = NextTerm;
    }
    printf("\n");
}