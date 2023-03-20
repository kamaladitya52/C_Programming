#include <stdio.h>

// 2.

int main (){
int t;
int a[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
   	    };
    
    for (int i=0,k=2; i<2; i++,k++)
    {
        for(int j=0,l=2; j<2; j++,l++)
        {
            t=a[i][j];
            a[i][j]=a[k][l];
            a[k][l]=t;
        }
    }

    for (int i=2,k=0;i<4;i++,k++)
    {
        for(int j=0,l=2;j<2;j++,l++)
        {
            t=a[i][j];
            a[i][j]=a[k][l];
            a[k][l]=t;
        }
    }
    
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
