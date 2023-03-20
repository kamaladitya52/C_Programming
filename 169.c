#include<stdio.h>

// 7. Write the following sequence using recurssion.
//  	x, y, x+y, x+2y , ...........	


void pat(int x, int y,int n){
  
    if (n==0)
        return;
    printf("%d  %d  ",x,y);
    x=x+y;
    y=x+y;
    pat(x,y,n-1);    
}

int main(){
    int x,y,n;
    printf("Enter First Number: ");
    scanf("%d",&x);
    printf("Enter Second Number: ");
    scanf("%d",&y);
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    pat(x,y,n);
    return 0;
}
