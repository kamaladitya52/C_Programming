#include<stdio.h>

/* 5.
	   4
	  34
	 234
	1234
*/ 

int main ()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d", &r);
    for ( int i = 1; i<=r; i++)
    {
        for ( int k = r-i; k>0; k--)
        {
            printf("  ");
        }
    for ( int j = r-i+1; j<=r; j++)
    {
            printf("%d ",j);
    }
printf("\n");
}
return 0;
}
