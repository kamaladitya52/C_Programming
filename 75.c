#include<stdio.h>

/* 9.
	1 2 3 4 5
	9 8 7 6
	10 11 12
	14 13
	15
				
*/

int main (){
int n=0;
	for(int i=5;i>=1;i--)
	{
	if(i%2==0)
	{	    
		n=n+i;
		for(int j=0;j<i;j++)
           {
        	if((n-j)<10)
         		{
			printf("%d",n-j);
              printf(" ");
                 }
                 else
                  {
                      printf("%d",n-j);
                    }
           }
        }
        else
        {
        	for(int k=1;k<=i;k++)
        	{
        		n=n+1;
        		if(n<10)
        		{
      			printf("%d",n);
       			printf(" ");
       		}
       		else
        		{
			printf("%d",n);}
        	}
        }
        printf("\n");
	}
return 0;
}
