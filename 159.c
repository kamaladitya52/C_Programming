#include <stdio.h>

// 5. Write a function take a two dimensional array and return back the sum of each rows.

void func(int two[][3],int *sum,int row,int col){
    for(int i=0;i<row;i++){
        sum[i]=0;
        for(int j=0;j<col;j++){
            sum[i]+=two[i][j];
        }
    }
}

int main (){
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int res[3];
    func(a,res,3,3);
    for (int i=0;i<3;i++){
        printf("sum of %d row %d \n",i+1,res[i]);
    }
    return 0;
}
