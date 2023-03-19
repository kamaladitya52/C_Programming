#include<stdio.h>

// 5. 1/3 + 1/5 + 1/7 + 1/9 ........................+1/n.

int main(){
float sum = 0.0;
int a=3;
int n;
printf("Enter odd value of n:");
scanf("%d",&n);
while(a<=n){
sum = sum + (1.0/a);
a = a + 2;
}
printf("Sum is %f\n",sum);
return 0;
}
