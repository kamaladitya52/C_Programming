#include <stdio.h>

// 6. 1 2 3 4 5 6 7 8
//    5 6 7 8 4 3 2 1

int main(){
int a[]={1,2,3,4,5,6,7,8};
    int *p=a+4,*q=a+7;
    int tmp;

    for (int i=0;i<2;i++)
    {
        tmp=*p;
        *p=*q;
        *q=tmp;
        p++;
        q--;
    }

    for (int i=7;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
