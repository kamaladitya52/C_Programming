#include<stdio.h>

/*
   9. * * * *
      * * *
      * *
      *
*/

void f(int t){
	int i,j;
	for(i=0;i<t;i++){
		for(j=0;j<t-i;j++){
		printf("*");
		}
	printf("\n");
	}
}

int main(){
int n;
printf("Enter the value of n:");
scanf("%d",&n);
	f(n);
return 0;
}
