#include<stdio.h>

// 6. 1/3 + 5/7 + 9/11 + ................+ (n-2)/n 

int main (){
float sum = 0.0;
float a=1.0;
int n;
printf("Enter the odd value of n:");
scanf("%d",&n);
while(a<=n){
sum = sum + ( a / (a+2) );
a = a + 4;
}
printf("Sum is %f\n",sum);
return 0;
}
