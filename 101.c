#include<stdio.h>

// 1. 2 9  6 4 5 7 8 90 3
//    3 90 8 7 5 4 6 9  2

int main (){
int num, rem, arr[10], i=0, count=0;
    printf("Enter the Number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        rem = num%10;
        arr[i] = rem;
        num = num/10;
        i++;
        count++;
    }
    printf("Reverse = ");
    for(i=0; i<count; i++)
        printf("%d", arr[i]);
return 0;
}
