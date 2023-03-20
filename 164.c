#include<stdio.h>

// 2. Write a recurssive function to display
//		1 2 3 4 5 ......n

void dis(int num){
	if(num)
	dis(num-1);
	else
	return;
	printf("%d ",num);
}

int main (){
	int n;
	printf("Enter the value on n:");
	scanf("%d",&n);
	dis(n);
return 0;
}
