#include <stdio.h>

// 3. Take an array and fill the array using pointer both in forward and backward direction.

int main()
{

    int *a,n,i,j,t;

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

    printf("Forward of an array:");
    for (i = n-1; i >= 0; i--)
    {
        printf("%d ", *(a + i));
    }

    
    
    
    printf("Backward of an array:");
    for (i = 0; i < n; i++)

    {
        printf("%d ", *(a + i));
    }

return 0;
}
