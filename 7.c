#include<stdio.h>

// 1. USING FORMAT SPECIFIER, SCANF AND PRINTF.

int main(){

char a;
printf("Enter Character:");
scanf("%c",&a);
printf("%c \n",a);

int b;
short int c;
long int d;
long long int e;
printf("\nEnter Integer Values:");

scanf("%d",&b);
printf("%d \n",b);

scanf("%hd",&c);
printf("%hd \n",c);

scanf("%ld",&d);
printf("%ld \n",d);

scanf("%lld",&e);
printf("%lld",e);

float f;
double g;
long double h;
printf("\nEnter Real Values:");
scanf("%f",&f);
printf("%f \n",f);

scanf("%lf",&g);
printf("%lf \n",g);

scanf("%Lf",&h);
printf("%Lf \n",h);



unsigned int j;
unsigned short int k;
unsigned long int l;
unsigned long long int m;
printf("\nEnter Unsigned:");
scanf("%u",&j);
printf("%u \n",j);


scanf("%hu",&k);
printf("%hu \n",k);

scanf("%lu",&l);
printf("%lu \n",l);

scanf("%llu",&m);
printf("%llu \n",m);

return 0;
}
