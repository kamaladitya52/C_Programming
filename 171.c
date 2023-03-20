#include<stdio.h>

// 9. Write a recursive function for summation.

     
int sum (int a, int b)
{
    if (a>b)
    {
        return 0;
    }
    else
    {
       return a+ sum(a+1, b) ;
    }
}
 
int main()
{
    int x,y, summation;
 
    printf("Enter lower limit: ");
    scanf("%d", &x);
    printf("Enter upper limit: ");
    scanf("%d", &y);
    summation = sum(x,y);
    printf("Summation of Series is %d.\n", summation);
    return 0;
}
 

