#include<stdio.h>

/* 16.
	1
	2 1
	1 1 1
	1 2 3 4
	1 1 1 1
	6 5 4 3 2 1
				
*/

int main (){
int a=0,b,c, n=1;
    for(b=1;b<=6;b++){
        for(c=1;c<=b;c++){
            if(b%2!=0){
                printf("1 ");
            }
            else if(a==0){
                printf("%d ",(b-(c-1)));
            }
            else{
                printf("%d ",(c));
            }
        }
        if(b%2==0){
            a=!a;
        }
        printf("\n");
        
    }
return 0;
}
