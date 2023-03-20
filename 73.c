#include<stdio.h>
/* 7.
				1
			1		1
		1		1		1
	1		1		1		1
		1		1		1
			1		1
				1
*/
int main (){
int i, j, rows, k;  
printf ("Enter the number of rows:");  
scanf("%d", &rows);   
int space = rows-1, num=1;
for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= space; j++)   
        {  
            printf("  ");   
        }  
        for ( k= 1; k <= num; k++)  
        {  
            printf(" 1");  
        }  
        if(space > i)  
        {  
            space = space -1;  
            num = num+2;  
        }  
        if(space <i)  
        {  
            space = space + 1;  
            num = num -2;  
        }  
printf("\n");  
}  
return 0;
}
