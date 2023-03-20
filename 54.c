#include<stdio.h>

/* 2. Collect an integer and display in following format.
	1296345
	Rs. 1,296,345.0
*/
int main (){
int n, m = 0, p = 10, i = 0, d = 0, a;
    printf("Enter the number:");
    scanf("%d", &a);
    n = a;
    printf("\nRs. ");
    while (n > 0)
    {
        m = m * p + (n % 10);
        n /= 10;
        i++;
    }
    while (m > 0)
    {
        i--;
        (i % 3 == 0) ? printf("%d,", m % 10) : printf("%d", m % 10);
        m /= 10;
    }
    printf("\b.0\n");
return 0;
}
