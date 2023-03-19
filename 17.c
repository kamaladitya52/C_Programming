#include <stdio.h>

// 6. Take a 5 digit number and Display its middle 3 digits.

int main() 
{

int a;

printf("Enter a 5-digit Number:");
scanf("%d",&a);
printf("It's middle 3-digit:");
printf("%d",(a%10000)/1000);
printf("%d",(a%1000)/100);
printf("%d\n",(a%100)/10);

return 0;

}
