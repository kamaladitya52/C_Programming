#include<stdio.h>

// 8. 1/2! + 1/3! + 1/4! + ...............+1/n!

int main (){
int n;
int a=2;
float factorial = 1.0;
float sum = 0.0;
printf("Enter the value of n:");
scanf("%d",&n);
while(a <= n)
{
factorial = factorial * a;
sum = sum + (1.0/factorial);
a++;
}
printf("Factorial of %.2f\n",sum);
return 0;
}
