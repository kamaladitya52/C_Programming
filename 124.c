#include <stdio.h>

// 2.(ii.)

int main() {
    int a[4][4],b[4][4],i,j, a1[2][2],a2[2][2],a3[2][2],a4[2][2], smat[2][2];
    int s1=0,s2=0,s3=0,s4=0;
       for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
	           printf("element at [%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        } 
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                a1[i][j]=a[i][j];
            }
        }
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                a2[i][j]=a[i][j+2];
            }
        }
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                a3[i][j]=a[i+2][j];
            }
        }
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                a4[i][j]=a[i+2][j+2];
            }
        }
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                s1=s1+a1[i][j];
            }
        }
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                s2=s2+a2[i][j];
            }
        }
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                s3=s3+a3[i][j];
            }
        }
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                s4=s4+a4[i][j];
            }
        }
        smat[0][0]=s1;
        smat[0][1]=s2;
        smat[1][0]=s3;
        smat[1][1]=s4;
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                printf("%d\t" ,smat[i][j]);
            }
            printf("\n");
        }
    return 0;
}
