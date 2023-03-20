#include<stdio.h>

// 4. 22 35 44 49 50 47 40 29 14

int main (){
 int n,x;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter number of middle element: ");
    scanf("%d",&x);
    int a[n],sum=0,d=x,i=(n/2)-1,j=(n/2),c=0;
    for(int i=1; i<n; i++){
        sum=sum+i;
    }
    while(d>(x-sum)){
        d=d-c;
        a[j]=d;
        c++;
        d=d-c;
        a[i]=d;
        c++;
        i--;
        j++;
    }
    printf("The required array is: ");
    for(int k=0; k<n; k++){
        printf("%d ",a[k]);
    }
return 0;
}
