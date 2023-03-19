#include <stdio.h>
// 1. Hexadecimal , Octal and Decimal change to Hexadecimal, octal and Decimal
int main() 
{

int a;
printf("Enter a decimal value:");
scanf("%d",&a);
printf("It's octal value:%o \n",a);
printf("It's hexadecimal value:%x \n\n",a);


printf("Enter a octal value:");
scanf("%x",&a);
printf("It's decimal value:%d \n",a);
printf("It's octal value:%o \n\n",a);

printf("Enter a hexadecimal value:");
scanf("%o",&a);
printf("It's decimal value:%d \n",a);
printf("It's hexadecimal value:%x \n",a);



return 0;
}
