#include<stdio.h>

// 3. FIND WHETHER THE GIVEN NUMBER IS A VALID OR NOT. ONLY FOR 4-DIGITS.

int main()
{
unsigned int a=5052,d1,d23,d4,num1,num2;

//printf("Enter 4-digit number:");
//scanf("%d",&a);

d1=a%10;
a=a/10;
d23=a%100;
a=a/100;
d4=a%10;

num1 = d1*10 + d4;
num2 = d4*10 + d1;

(d23*d23 == num1) ? printf("Valid") : (d23*d23 == num2) ? printf("Valid") : printf("Invalid");

return 0;
}
