#include<stdio.h>

// 4. TAKE THREE NUMBERS AND INTERCHANGE THE VALUES WITHOUT USING THIRD VARIABLE.

int main()
{

int a;
int b;
int c;

printf("Enter the value of a:");
scanf("%d", &a);
printf("Enter the value of b:");
scanf("%d", &b);
printf("Enter the value of c:");
scanf("%d", &c);

a=a+b+c;
b=a-b-c;
c=a-b-c;
a=a-b-c;

printf("\nAfter Interchanging the values:\n");

printf("\na=%d \n",a);

printf("b=%d \n",b);

printf("c=%d \n",c);


return 0;
}
