#include <stdio.h>

// 4. Reverse the array using pointer.

int main()
{
    int *a, n, i, j, t;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter %d Elements:",n);
   
    for (i = 0; i < n; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d", a + i);
    }

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        t = *(a + i);
        *(a + i) = *(a + j);
        *(a + j) = t;
    }

    printf("After reversing the array:");
    
    for (i = 0; i < n; i++)
    {
        printf("%d", *(a + i));
    }

return 0;
}
