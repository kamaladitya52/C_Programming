#include <stdio.h>
#include <string.h>
// 6. Pass a string to an array and reverse it. The reverse string has to be displayed in the main. 



void func(char *str){
    int len=strlen(str),temp;
    for (int i=0,j=len-1; i<len/2;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

int main (){
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    func(str);
    printf("Reverse String: %s\n",str);

    return 0;
}
