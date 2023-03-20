#include<stdio.h>

// 2. Take two numbers and display in following format
// 2 7 9 16 25 41

int main (){
int a,b,n,i=1;
printf("Enter the 1st number:");
scanf("%d",&a);
printf("Enter the 2nd number:");
scanf("%d",&b);
printf("Enter the value of n:");
scanf("%d",&n);
printf("%-10d%-10d",a,b);
x:
a=a+b;
b=a+b;
printf("%-10d%-10d",a,b);
i++;
if(i<=n/2-1)
goto x;
printf("\n");
return 0;
}
