#include<stdio.h>

// 4. n n-2 n-4 n-6 .............

int main()
{
    int a,n,i;
    printf("Enter the array size:");
    scanf("%d",&a);
    printf("Enter the first element:");
    scanf("%d",&n);
    int b[a];
    for(i=0;i<a;i++)
    {
      printf("%d\t",n);
        n=n-2;
    }
    return 0;
}
