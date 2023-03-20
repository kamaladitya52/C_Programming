#include<stdio.h>

/* 6.
				1
			1		1
		1		1		1
	1		1		1		1
*/

int main (){
int n,i,j,k; 
 printf("Enter the number of rows:"); 
 scanf("%d",&n); 
printf("\n"); 
 for(i=1;i<=n;i++) 
 { 
	 for(j=1;j<=n-i;j++) 
	 printf(" "); 
	 for(k=1;k<=i;k++) 
	 printf("1 "); 
 printf("\n"); 
 } 
return 0;
}
