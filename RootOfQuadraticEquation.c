#include <stdio.h>
#include <math.h>

void main() 
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("\nEnter 3 coefficients to calculate the roots of the QUADRATIC EQUATION :\n");
    printf("Coefficient a = ");
    scanf("%lf",&a);
    printf("Coefficient b = ");
    scanf("%lf",&b);
    printf("Coefficient c = ");
    scanf("%lf",&c);

    discriminant = b*b - 4*a*c;                                       //b^2 - 4ac

    if (discriminant > 0)                                  // condition for real and different roots
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nRoot 1 = %.4lf \nRoot 2 = %.4lf \n", root1, root2);
    }
    else if (discriminant == 0)                               // condition for real and equal roots
    {
        root1 = root2 = -b / (2 * a);
        printf("\nRoot 1 = Root 2 = %.4lf \n", root1);
    }
    else                                                      // if roots are complex and different
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("\nRoot 1 = %.2lf + %.4lfi \nRoot 2 = %.2f - %.4fi \n", realPart, imagPart, realPart, imagPart);
    }
} 