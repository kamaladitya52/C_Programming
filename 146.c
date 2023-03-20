#include <stdio.h>
#include <math.h>

// 4. Write a function to find the x^y.

int main()
{
    double base, exp, result;
    printf("To calculate x^y:-\n");
    printf("Enter the value of x: ");
    scanf("%lf", &base);
    printf("Enter the value of y: ");
    scanf("%lf", &exp);

    result = pow(base, exp);

    printf("%.1f^%.1lf = %.2f", base, exp, result);
    return 0;
}
