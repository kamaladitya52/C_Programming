#include<stdio.h>

/* 8.
	1 2 3 4 5
	6 7 8 9
	10 11 12
	13 14
	15				
*/
int main (){
int i,j,k;
  k=1;
  for(i=1;i<=5;i++)
  {
    for(j=5;j>=i;j--)
    {
        printf("%d ",k++);
    }
    printf("\n");
  }
return 0;
}