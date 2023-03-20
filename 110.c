#include<stdio.h>

/* 2.(C) 1  7  12  6
	 2  8  11  5
	 3  9  10  4
*/
// row=3 and column=4

int main (){
 int row,col,x=1;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of rows: ");
    scanf("%d",&col);
    int mat[row][col];
    printf("ENTER ELEMENTS:\n");

    for(int i = 0; i<col/2; i++)
    {        
            for(int j = 0; j<row; j++)
            {
                mat[j][i]=x;
                x++;
            }
            for(int j = row-1; j>=0; j--){
                mat[j][col-i-1]=x;
                x++; 
            }       
    }
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            printf("%-5d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
return 0;
}
