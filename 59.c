#include<stdio.h>

/* 
7. Find the middle digit of a given number.
	3496----------> 49
	19642---------> 6
*/
int main (){
 int n, m, l = 0;
    printf("Enter number:");
    scanf("%d", &n);
    m = n;
    while (n)
    {
        n /= 10;
        l++;
    }
    if (l % 2 != 0)
    {
        int mid = (l + 1) / 2;
        while (l > mid)
        {
            m /= 10;
            l--;
        }
        printf("\nThe middle digit is %d\n", m % 10);
    }
    else
    {
        int mid = l / 2;
        while (l > (mid + 1))
        {
            m /= 10;
            l--;
        }
        printf("\nThe middle digit are %d and %d\n", (m / 10) % 10, m % 10);
    }
return 0;
}
