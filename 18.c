#include <stdio.h>

/* 7. Take a 5 digit number and Compute the following as per given order of digits:-
	21943
	43921

*/

int main() 
{

int a;

printf("Enter a 5-digit Number:");
scanf("%d",&a);
printf("Change to  given Order:");
printf("%d",(a%100)/10);
printf("%d",a%10);
printf("%d",(a%1000)/100);
printf("%d", a/10000);
printf("%d\n",(a%10000)/1000);


return 0;

}
