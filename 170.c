#include<stdio.h>

// 8. Write a recursive function to display multiplication table in reverse order.

void MultiplicationTable(int n, int i)
{
    printf("%d X %d = %d\n", n, i, n * i);
    if (i > 1)
        return MultiplicationTable(n, i - 1);
}
int main()
{
    int n, i = 0;

    printf("Enter a number:");
    scanf("%d", &n);
    printf("Multiplication Table of %d:\n", n);
    MultiplicationTable(n, 10);
}
