#include<stdio.h>

/* 15.
	       1
	    1    1
	   1   2   1
	  1  3   3  1
	 1  4  6  4  1

				
*/

int main (){
 int a=1,c,b,d;
    for(c=0;c<5;c++){
        for(b=1;b<=5-c;b++)
        printf(" ");
        for(d=0;d<=c;d++){
            if(d==0 || c==0)
               a=1;
            else
                a=a*(c-d+1)/d;
                printf("%3d",a);
        }
        printf("\n");
    }
return 0;
}
