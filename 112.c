#include<stdio.h>

/* 2.(E) 10 6 3 1
            9 5 2
              8 4
                7
*/
int main (){
 int s,c=1,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&s);
    int mat[s][s], t=s-1;
    printf("The elements are: ");
    for(int i = 0; i<s; i++,t--){
            for(int j = i; j>=0; j-- ){
                mat[j][j+t]=c;
                c++;
            }
        }        

    printf(" \n");
    for(int i = 0; i<s; i++)
    {
        for(int j = 0; j<s; j++){
            if(j>=i){
                printf("%-5d", mat[i][j]);
            }
            else{
                printf("     ");
            }
        }
        printf("\n");
    }
return 0;
}
