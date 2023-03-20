#include <stdio.h>

// 8. Prime numbers between two numbers using array.

int main()
{
    int start,end,c=0,k=0,x=0;
    printf("\n Enter the value of start and end numbers: ");
    scanf("%d%d",&start,&end);
    for(int i=start; i<=end; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                k++;
            }
        }
        if(k==0 && i!=1){
            c++;
        }
        k=0;
    }
    int a[c];
    for(int i=start; i<=end; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                k++;
            }
        }
        if(k==0 && i!=1){
            a[x]=i;
            x++;
        }
        k=0;
    }
    printf(" The required array is: ");
    for(int i=0; i<c; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
