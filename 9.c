#include<stdio.h>

// 3. TAKE TWO NUMBERS AND INTERCHANGE THE VALUES WITH THE HELP OF THIRD VARIABLE c

int main()
{
int a;
int b;
int c;
printf("Enter the value of a:");
scanf("%d", &a);
printf("Enter the value of b:");
scanf("%d", &b);
c=a;
a=b;
b=c;
printf("\nAfter Interchange:\n\n");
printf("Value of a:%d \n",a);

printf("Value of b:%d \n\n",b);

return 0;
}
