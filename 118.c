#include<stdio.h>
int main (){
int m,n,i,j,frsum=0,rsum=0,fcsum=0,csum=0;
printf("Enter no. of rows:");
scanf("%d",&m);
printf("Enter no. of columns:");
scanf("%d",&n);
int a[m][n];

for(i=0;i<m;i++)
{
	for(j=0;j<n;j++){
				printf("%d%d ",i,j);
		       	     }
		       printf("\n");
}
return 0;
}
