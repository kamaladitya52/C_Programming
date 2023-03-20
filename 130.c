#include <stdio.h>

/* 5. 
	2 9 6 8 4 7 5
	5 7 4 8 6 9 6

*/
int main()
{
    int n;
    int i, *p;
    printf("Enter the size of an array:");
    scanf("%d", &n);
    
    int a[n];
    
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d", &a[i]);
    p = &a[n - 1];
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ",*p);
        *p--;
    }

return 0;
}
