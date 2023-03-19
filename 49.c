#include<stdio.h>

// 10. 1/3 + 3/5 + 5/7 + 7/9 + ..........+ (n-2)/n.

int main (){
float sum = 0.0;
int a = 1;
int n;
printf("Enter the value of n:");
scanf("%d",&n);
while(a<=n)
{
sum = sum + ( a*1.0 / (a+2)*1.0 );
a = a + 2;
}
printf("Sum is %f\n",sum);
return 0;
}

