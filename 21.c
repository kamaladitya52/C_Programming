#include<stdio.h>

// 2. FIND THE MAXIMUM AND MINIMUM AMONG 4 NUMBER. 

int main(){
int a,b,c,d,e,f;
printf("Enter the value a:");
scanf("%d",&a);

printf("Enter the value b:");
scanf("%d",&b);

printf("Enter the value c:");
scanf("%d",&c);

printf("Enter the value d:");
scanf("%d",&d);


e=(a>b && a>c && a>d)?a:((b>c && b>d)?b:(c>d?c:d));
f=(a<b && a<c && a<d)?a:((b<c && b<d)?b:(c<d?c:d));
printf("Maximum among a,b,c and d is %d\n",e);
printf("Minimum among a,b,c and d is %d\n",f);

return 0;
}
