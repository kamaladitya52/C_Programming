#include<stdio.h>

/* 2.(C) 10  8  7  1
	 9   6  2 
	 5   3
	 4 
*/

int main (){
int s,c=1,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&s);
    int mat[s][s], t=s-1;
    printf("The elements are: ");
    for(int i = s-1; i>=0; i--,t--)
    {
        if(k==0){
            for(int j = 0; j<=i; j++ )
            {
                mat[j][t-j]=c;
                c++;
            }
            k=1;
        }
        else{
            for(int j = i; j>=0; j--){
                mat[j][t-j]=c;
                c++;
            }
            k=0;
        }
        
    }

    printf("\n");
    for(int i = s-1; i>=0; i--)
    {
        for(int j = 0; j<=i; j++)
        {
            printf(" %-5d", mat[s-1-i][j]);
        }
        printf("\n");
    }
return 0;
}
