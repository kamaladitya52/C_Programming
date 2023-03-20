#include <stdio.h>

// 8. 1/1! + 1/3! + 2/5! + 3/7! + 5/9! + 8/11!

float fact_sum(int);

int main()
{
    int n;
    printf("Enter number of terms the series is to be calculated: ");
    scanf("%d", &n);
    printf("= %f", fact_sum(n));
    return 0;
}

float fact_sum(int n)
{
    float fact=1.0, a=1.0, b=1.0, c=1.0, sum=0.0;
    int i,j;
    for(i=1; i<=n; i++)
    {
        fact *= c;
        sum += a/fact;
        j = b;
        printf("%.0f/%.0f + ",a,fact);
        b = a+b;
        
        a = j;
        
        fact = fact * (c+1);
        c+=2;
    }
    return sum;
}
