#include<stdio.h>

// 6. Write a function which will return nth fibonacci number.

int main (){

 int i, n;

    int a1 = 0, a2 = 1;

    int b = a1 + a2;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", a1, a2);

    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", b);
        a1 = a2;
        a2 = b;
        b = a1 + a2;
    }

return 0;
}
