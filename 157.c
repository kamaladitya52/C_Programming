#include <stdio.h>

// 3. Pass a two dimensional array to a function and display the whole array inside the function.

int func(int *p,int row,int col){
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            printf("%d ",*p);
            p++;
        }
        printf("\n");
    }
}

int main(){
    int a[5][5]=
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
     };
    func(*a,5,5);
    return 0;
}
