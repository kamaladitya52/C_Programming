#include <stdio.h>

// 3.

int main(){
 int a[4][4], b[4][4], s1[3][3],s2[3][3], i, j,k,sum=0,pro[3][3];
    printf("Enter Elements of 1st matrix:\n");
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j) 
        {
        printf("Element at %d%d: ", i, j);
        scanf("%d", &a[i][j]);
        }

    printf("\nEnter Elements of 2nd matrix: \n");
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j) 
        {
        printf("Element at %d%d: ", i, j);
        scanf("%d", &b[i][j]);
        }
    
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            s1[i][j]=a[i][j];
        }
    }
    
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            s2[i][j]=b[i+1][j+1];
        }
    }
    
    for ( i = 0 ; i < 3; i++ )
    {
        for ( j = 0 ; j < 3 ;j++ )
        {
            for ( k = 0 ; k < 3 ; k++ )
            {
            sum = sum + s1[i][k]*s2[k][j];
            }
        pro[i][j] = sum;
        sum = 0;
        }
    }
 
    printf("Product of the sub matrices is:\n");
 
    for ( i = 0 ; i <3 ; i++ )
    {
        for ( j = 0 ; j < 3 ; j++ )
        printf("%d\t", pro[i][j]);
        printf("\n");
    }
    return 0;
}
