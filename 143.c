#include <stdio.h>
#include <string.h>

// 1. Find number of words (with multiple space).

int main()
{
    char c[100];
    int count = 0, i;

    printf("Enter the string:");
    
    fgets(c, 100, stdin);
    
    for (i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == ' ')
            count++;
    }
    printf("Number of words in given string are: %d\n", count+1);

    return (0);
}
