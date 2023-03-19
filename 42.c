#include<stdio.h>

// 4. Find all the even numbers summation in between two integers.

int main (){
int num1, num2, sum;
sum = 0;
    printf("Enter the 1st integer:");
    scanf("%d",&num1);
    printf("Enter the 2nd integer:");
    scanf("%d,",&num2);
    while (num1 < num2)
    {
        if (num1 % 2 == 0)
        {
            sum = sum + num1;
        }
    num1++;
    }
    printf("%d\n", sum);
return 0;
}
