#include<stdio.h>

// 1. FIND THE MINIMUM AMONG TWO NUMBERS.

int main(){
int a,b,c;
printf("Enter the value a:");
scanf("%d",&a);

printf("Enter the value b:");
scanf("%d",&b);

c=(a<b)?a:b;
printf("Minumum among a and b is %d\n",c);
return 0;
}
