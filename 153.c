#include<stdio.h>

// 11. Calculator

int calculate(int, int, char);
int main()
{
    int n1, n2;
    char ch;
    printf("Enter an operator i.e., +, -, * or / : ");
    scanf("%c", &ch);
    printf("Enter 1st operands:");
    scanf("%d",&n1);
    printf("Enter 2nd operands:");
    scanf("%d",&n2);
    
    printf("Calculation: %d %c %d = %d", n1, ch, n2, calculate(n1, n2, ch));
    return 0;
}

int calculate(int n1, int n2, char ch)
{
    int ans;
    if(ch == '+')
    {
        ans = n1+n2;
    }
    else if(ch == '-')
    {
        ans = n1-n2;
    }
    else if(ch == '*')
    {
        ans = n1*n2;
    }
    else if(ch == '/')
    {
        ans = n1/n2;
    }
    else
    {
        ans = 0;
    }
    return ans;
}
