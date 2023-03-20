#include<stdio.h>

// 4. Write a recursive function for returning the summation of all the digits of a number.

int sum(int num)
{
    if (num != 0)
    {
        return (num % 10 + sum(num / 10));
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num, star;

    printf("Enter the number: ");
    scanf("%d", &num);
    star = sum(num);
    printf("Sum of digits in %d is %d\n", num, star);
    return 0;
}
