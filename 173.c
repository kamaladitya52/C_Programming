#include<stdio.h>

// 11. Write a recurssive function to reverse the given string.

void reverse(char s[], int rev, int len)
{
    char temp;
    temp = s[rev];
    s[rev] = s[len - rev];
    s[len - rev] = temp;
    if (rev == len / 2)
    {
        return;
    }
    reverse(s, rev + 1, len);
}
int main()
{
    char s[20];
    int len;
 
    printf("Enter a string to reverse: ");
    scanf("%[^\n]s", s);
    int j;
    for (j=0;s[j]!='\0';++j)
    len=j;
    len++;
    reverse(s, 0, len - 1);
    printf("Required Output: %s\n", s);
    return 0;
}
 

