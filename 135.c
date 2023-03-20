#include <stdio.h>

// 3. Take a string and display each character present in the string.

int main(){

 char s[5];

    printf("Enter a String:");
    scanf("%s",s);
    
    int i;
    for ( i = 0; s[i] != '\0'; i++)
    {
        printf("Character present at %d Index Position = %c \n", i, s[i]);
    }
    
    return 0;
}
