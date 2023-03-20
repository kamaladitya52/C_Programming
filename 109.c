#include <stdio.h>

/* 2.(B) 1  2  3  4
	 8  7  6  5
	 9 10 11 12
*/

int main(){
int m,n,count=1;
printf("Enter the number of row:");
scanf("%d",&m);
printf("Enter the number of column:");
scanf("%d",&n);
int a[m][n];
for (int i=0;i<m;i++)
{
        for (int j=0;j<n;j++)
        {
        	printf("Enter the value of a%d%d:",i,j);
	            scanf("%d",&a[i][j]);
        }
}
  
for (int i=0; i<m;i++) 
{
	if (i%2==0)
       		for (int j=0; j<n; j++)
        		{
           		 a[i][j]=count;
            			count++;
        		}
        else
        	for (int j=n-1;j>=0;j--)
        	{
            		a[i][j]=count;
            			count++;
        	}
}

    
for (int i=0;i<m;i++)
{
        for (int j=0;j<n;j++)
        {
	            printf("%d ",a[i][j]);
        }
printf("\n");
}
    return 0;
}
