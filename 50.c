#include<stdio.h>

// 11. n/1 + 2/n-2 + n-4/3 + 4/n-6 + .........

int main (){
int n,i;
float sum = 0.0;
float fact = 1.0;
printf("Enter the value of n:");
scanf("%d",&n);
i=1;
while(n>0)
{
 if(i%2==1)
 {
 	sum = sum + n/(i*1.0);
 }else
 {
 	sum = sum + (i*1.0)/n;
 }
 i = i +1;
 n = n-2;
}
printf("Sum of the given series is %f\n",sum);
return 0;
}
