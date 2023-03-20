#include<stdio.h>

/* 12.
		  *
		 **
		***
		 **
		  *
				
*/

int main (){
    int i, j, rows, k;  
    printf ("Enter the number of columns:");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)   
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*");   
        }  
        printf ("\n");   
    }  
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 2; j <= i; j++)  
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("*"); 
        }  
        printf ("\n");   
    }  
return 0;
}
