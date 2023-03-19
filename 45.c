#include<stdio.h>

// 7. Factorial of a Number.

int main (){
int n;
int a=1;
int factorial = 1 ;
printf("Enter the value of n:");
scanf("%d",&n);
while(a <= n)
{
factorial = factorial * a;
a++;
}
printf("Factorial of %d is %d.\n",n,factorial);
return 0;
}
