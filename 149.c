#include<stdio.h>

// 7. Write a function for finding n!.

void main()
{
    int n,factorial;
    int fact (int n);
    printf("Enter a number: ");
    scanf("%d",&n);
    factorial=fact(n);
    printf("Factorial of %d is %d.",n,factorial);
 }
int fact (int n)
{
    int i,f;
for(i=1,f=1;i<=n;i++)
{
    f=f*i;
}
return f;
}
