#include <stdio.h>

// 6. Find the reverse of a string.

int main(){
 char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    int length=0;
    while (str[length]!='\0')
    {
        length++;
    }
    int temp;
    for (int i=0,j=length-1; i<length/2; i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("Reverse of string is: ");
    printf("%s",str);
    return 0;
}
