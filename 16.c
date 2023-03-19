#include <stdio.h>
// 5. Take a 3 digit number and Calculate its reverse number.
int main() 
{
int a;
printf("Enter a 3-digit Number:");
scanf("%d",&a);
printf("It's Reverse Number:   ");
printf("%d",a%10);
printf("%d",(a%100)/10);
printf("%d\n",a/100);

return 0;
}

