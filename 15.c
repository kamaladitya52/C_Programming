#include <stdio.h>
// 4. Take an 4 digit integer number and display its each digit
int main() 
{
int a;
printf("Enter a 4-digit number:");
scanf("%d",&a);
printf("Reverse Order:\n");
printf("%d\n",a%10);
printf("%d\n",(a%100)/10);
printf("%d\n",(a/100)%10);
printf("%d\n",a/1000);
 
printf("Forward Order:\n");
printf("%d\n",a/1000);
printf("%d\n",(a/100)%10);
printf("%d\n",(a%100)/10);
printf("%d\n",a%10);
return 0;
}
