#include <stdio.h>

// 2. AB CD   KP\0
//    BA DC   PK

int main()
{
    char str[100];
    char str1[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int i,j, c=0, k=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ' && c==0)
        {
            for(j=i-1; j>=0; j--)
            {
                str1[k] = str[j];
                k++;
            }
            c = 1;
            str1[k] = ' ';
            k++;
        }
        else if(str[i] ==' ' && str[i-1]!=' ')
        {
            for(j=i-1; str[j]!=' '; j--)
            {
                str1[k] = str[j];
                k++;
            }
            str1[k] = ' ';
            k++;
        }
        else if(str[i]==' ' && str[i-1]!=' ')
        {
            str1[k] = ' ';
            k++;
        }
    }
    for(j=i-1; str[j]!=' '; j--)
    {
        str1[k] = str[j];
        k++;
    }
    str1[k] = '\0';
    printf("The required output string is: %s", str1);
    printf("\n");
    return 0;
}
