#include <stdio.h>
#include <string.h>

// 7. Pass a string along with a character and return back how many times the given character is presemt in the string and also return the string by replacing the given character with a space. 

int f1(char *arr,char x){
    int i,count =0;
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==x){
            count++;
            arr[i]=' ';
        }
    }
    return count;
}
    
int main(){
    char a[100];
    printf("Enter the String:");
    scanf("%[^\n]s",a);
    char x;
    getchar();
    printf("Enter the Character:");
    scanf("%c",&x);
    int no=f1(a,x);
    printf("Required String: %s\n",a);
    printf("Total no. of times '%c' present is equal to %d\n",x,no);
}

