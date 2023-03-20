#include<stdio.h>

// 2. Take a variable size array and reverse it.

int main()
{
    int a[100], b[100], i, j, Size;

    printf("Please Enter the size of an array: ");
    scanf("%d", &Size);

    for (i = 0; i < Size; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    for (i = Size - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }

    printf("Reverse array is ");
    for (i = 0; i < Size; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
