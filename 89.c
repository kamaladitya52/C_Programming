#include<stdio.h>

// 4. 1/2! + 1/4! + 1/6! + 1/10! + 1/16!

int main() {
    printf("Program to display factorial series using goto.\n");
    int n,k=0;
    printf("Enter the value of n (No. of terms-2) :\t");
    scanf("%d",&n);
    int A=0 , B=0;
    printf("\nEnter 1st number : 1/");
    scanf("%d",&A);
    printf("\nEnter 2nd number : 1/");
    scanf("%d",&B);
    printf(" 1/%d! +" " 1/%d!",A,B);
    start:
          k = B + A;
          printf("+ 1/%d! ",k);
          A = B;
          B = k;
          n-= 1;
    if(n>0)
    goto start;
return 0;
}


