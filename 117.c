#include<stdio.h>

// 3(D).

int main (){
int matrix[3][3]= {{1,0,0},{1,1,0},{1,0,0}};
    printf(" The required output is:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
return 0;
}
