#include<stdio.h>

/*4.
	1
	21
	321
	4321 
*/

int main (){
int i,j,n;
printf("Enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=i;j>=1;j--){
	printf("%d",j);
	}
printf("\n");
}
return 0;
}
