#include <stdio.h>

/* 2. Take a string ABCD\O
	ABCD
	BCD
	CD
	D
*/
int main(){
	char a[]={'A','B','C','D','\0'};
	int i,j;
	
for(j=0;j<4;j++)
{
		for(i=0;a[i]!='\0';i++)
		{
			printf("%c",a[i+j]);
			
		}	
printf("\n");	
}
	return 0;
}
