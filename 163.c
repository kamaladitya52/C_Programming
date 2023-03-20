#include<stdio.h>

// 1. Write a factorial function using recurssion.

int fact(int no){
	int f=1;
	for(int i=no;i>0;i--){
		f=f*i;
	}
	return f;
}


int main (){
	int n;
	printf("Enter the value on n:");
	scanf("%d",&n);
	int x = fact (n);
	printf("Factorial of %d is %d.\n",n,x);
	return 0;
}
