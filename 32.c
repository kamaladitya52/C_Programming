#include <stdio.h>

//5. Take a real number and round upto 2 decimal places.
//	19.6534 ------> 19.65
//	19.6554 ------> 19.66

int main () {
	float a;
	//float a = 19.6554;
	printf("Enter the decimal number:");
	scanf("%f",&a);
	int b = a;
	float c = a-b;
	int p,q;
	p = c * 1000;
	float r;
	q = p % 10;
	if (q>=5){
		r = p/10 + 1;
	}else{
		r = p/10;
	}
	float d; 
	d = b + r / 100.0;
	printf("%.2f\n",d);
return 0;
}
