#include<stdio.h>

// 10. Write a recursive function for displaying the string in reverse order. 

char* reverse(char* s);
int i = 0;
char rev[100];
void main()
{
    int i, j, k;
    char s[100];
    char *rev;
    printf("Enter the string: ");
    scanf("%[^\n]s", s);
    rev = reverse(s);
    printf("String after reversing: %s\n", rev);
    
}
char* reverse(char *s)
{
    
    if(*s)
    {
        reverse(s+1);
        rev[i++] = *s;
    }
    return rev;
}
