#include <stdio.h>

// 1. 
//	(ii). Transpose of a square matrix.

int main(){
int m,n,i,j,k;
printf("Enter the order of square matrix n:");
scanf("%d",&n);
int a[n][n],b[n][n],c[n][n];
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("Enter the value a%d%d:",i,j);
		scanf("%d",&a[i][j]);
		
	}
}

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		b[i][j]=a[j][i];
	}
printf("\n");
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d ",b[i][j]);
		
	}
printf("\n");
}

    return 0;
}
