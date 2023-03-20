#include<stdio.h>

/* 1. Create a two dimensional array an do the following:-
   (i.) Fill the array using scanf.
   (ii.) Display the array.
   (iii.) Find the summation of each row and each column.
*/
int main (){
int m,n,i,j,frsum=0,rsum=0,fcsum=0,csum=0,sum=0;
printf("Enter m(rows):");
scanf("%d",&m);
printf("Enter n(column):");
scanf("%d",&n);
int a[m][n];
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("Enter the value a%d%d:",i,j);
		scanf("%d",&a[i][j]);
	}
}

for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d ",a[i][j]);
		sum=sum+a[i][j];
	}
		
	printf("\n");
}

for(i=0;i<m;i++)
{
	for(j=0;j<m;j++)
	{
			rsum=rsum+a[i][j];
	}
			frsum=rsum-frsum;
			printf("Summation of %d rows is %d.\n",i,frsum);
}

for(j=0;j<n;j++)
{
	for(i=0;i<m;i++)
	{
			csum=csum+a[i][j];
	}
			fcsum=csum-fcsum;
			printf("Summation of %d columns is %d.\n",j,fcsum);
}

printf("Summation of all the digit is %d.\n",sum);
return 0;
}
