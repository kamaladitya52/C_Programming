#include<stdio.h>

// 3. Display the number between two integers which are divisible by 7 and 8.

int main (){
int num1,num2;
printf("Enter the 1st integer:");
    scanf("%d",&num1);
    printf("Enter the 2nd integer:");
    scanf("%d,",&num2);
while (num1<=num2)
{
	if(num1 % 7 == 0 && num1 % 8 == 0)
	printf("%d\n",num1);
num1++; 
}
return 0;
}
