#include<stdio.h>

/* 3.
	1 2 3 4 5
	9 8 7 6
	10 11 12
	14 13
	15

*/

int main (){
int i = 5, j = 1, x = 1,y;
    x:
        y=x+i-1;
        j = 1;
    y:
        if (i %2!=0){
            printf("%d\t", x);
            j++;
            x++;
        }
        else {
            printf("%d\t", y);
            y--;
            j++;
            x++;
        }
        if (j <= i)
        {
            goto y;
        }
    
        printf("\n");
        i--;
        if (i > 0)
        {
            goto x;
        }
return 0;
}

