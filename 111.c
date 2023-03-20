#include <stdio.h>

/* 2.(D) 7
	 6  8    
	 2  5  9
	 1  3  4   10
*/

int main(){
 int s,c=1,k=0;
    printf("Enter the no. of rows: ");
    scanf("%d",&s);
    int mat[s][s], t=s-1;
    printf("The elements are: ");
    for(int i = s-1; i>=0; i--,t--){
        if(k==0){
            for(int j = s-1; j>=i; j-- ){
                mat[j][j-t]=c;
                c++;
            }
            k=1;
        }
        else
        {
            for(int j = i; j<s; j++){
                mat[j][j-t]=c;
                c++;
            }
            k=0;
        }
        
    }

    printf("\n");
    for(int i = 0; i<s; i++)
    {
        for(int j = 0; j<=i; j++){
            printf(" %-5d", mat[i][j]);
        }
        printf("\n");
    }
    printf(" ");
    return 0;
}
