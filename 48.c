#include<stdio.h>

// 9. 1!/2! + 3!/4! + 5!/6! + ............+ (n-1)!/n!

int main (){
int i,n;
float fact = 1.0;
float sum=0.0;
i=1;
printf("Enter the value of n:");
scanf("%d",&n);
while(i<=n)
{
sum = sum + (fact*i)*1.0/(fact*i*(i+1))*1.0;
fact = fact *i*(i+1);
i=i+2;
}
printf("Sum of given series is %f\n",sum);
return 0;
}
