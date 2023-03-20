#include<stdio.h>

// 3. Find all the perfect square in between two integers. And also find their summation.

int main (){
int a, b, n, sum = 0;
    printf("Enter 1st number:");
    scanf("%d", &a);
    printf("Enter 2nd number:");
    scanf("%d", &b);
    while (a <= b)
    {
        n = 1;
        while (n <= a)
        {
            if (n * n == a)
            {
                printf("%d\t", a);
                sum += a;
            }
            n++;
        }

        a++;
    }
    printf("\n\nThe Sum of all the perfect square is %d.\n", sum);
  return 0;
}
