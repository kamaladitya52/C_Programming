#include <stdio.h>
// 2. Take a real value and display its integer part and decimal part

int main() 

{

float num,deci;
int integer;
printf("Enter a number which have decimal place:");
scanf("%f",&num);
integer=num;
deci= num-integer;
printf("It's integer Part:%i\n",integer);
printf("It's decimal Part:%.3f\n",deci);

return 0;
}
