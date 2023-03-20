#include <stdio.h>

// 1.
//   (i). Multiplication of a square matrix.

int main(){
int m,n,o,i,j,k;
printf("Enter the value of A's rows (m):");
scanf("%d",&m);
printf("Enter the value of A's columns and B's rows and (n):");
scanf("%d",&n);
printf("Enter the order of C's columns (o)");
scanf("%d",&o);
int a[m][n],b[n][o],c[m][o];
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
		printf("Enter the value b%d%d:",i,j);
		scanf("%d",&b[i][j]);
		
	}
}


for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		c[i][j]=0;
		
		for(k=0;k<n;k++)
		{
			c[i][j]=c[i][j] + a[i][k] * b[k][j];	
		}
	
	}
}
for(i=0;i<m;i++)
{
	for(j=0;j<o;j++)
	{
		printf("%d ",c[i][j]);
		
	}
printf("\n");
}

    return 0;
}
