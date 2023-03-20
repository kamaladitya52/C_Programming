#include<stdio.h>

/*
 8. Find the reverse of a given number in the following manner.
	129643
	439612
*/
int main (){
 int num, x, sum = 0;
 printf("Enter the number:");
    scanf("%d", &num);
    while (num != 0)
    {
        x = num % 100;
        num = num / 100;
        printf("%d", x);
    }
   printf("\n");
return 0;
}
