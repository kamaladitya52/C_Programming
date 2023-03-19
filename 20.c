#include<stdio.h>

// 2. FIND THE MAXIMUM AND MINIMUM AMONG 3 NUMBER.

int main(){
int a,b,c,d,e;
printf("Enter the value a:");
scanf("%d",&a);

printf("Enter the value b:");
scanf("%d",&b);

printf("Enter the value c:");
scanf("%d",&c);


d=(a>b)?((a>c)?a:c):((b>c)?b:c);
e=(a<b)?((a<c)?a:c):((b<c)?b:c);

printf("Maximum among a,b and c is %d\n",d);
printf("Minimum among a,b and c is %d\n",e);

return 0;
}
