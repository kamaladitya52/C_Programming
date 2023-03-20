#include <stdio.h>

// 3. ab dcp mn
//    Ab Dcp Mn

int main()
{
    char a[100];
    int i;
    printf("Enter the string : ");
    scanf("%[^\n]s", a);
    for (i = 0; a[i] != 0; i++)
    {
        if (i == 0)
        {
            a[i] = a[i] - 32;
        }
        else if (a[i] == ' ')
        {
            a[i + 1] = a[i + 1] - 32;
        }
    }
    printf("%s", a);
    return 0;
}
