#include<stdio.h>

/*
   10. * * * *
       * * *
       * *
       *
       A B
       = = =
       = =
       =
       C D
       E X
       # #
       #
*/

void f(int l,char d){
	int i,j;
	for(i=0;i<l;i++){
		for(j=0;j<l-i;j++){
		printf("%c",d);
		}
	printf("\n");
	}
}

void p(int l,char d){
	int i,j;
	for(i=0;i<l;i++){
		for(j=0;j<=i;j++){
		printf("%c",d);
		}
	printf("\n");
	}
}

int main(){
int n;

	f(4,'*');
	printf("AB\n");
	f(3,'=');
	printf("CD\n");
	p(4,'_');
	printf("EX\n");
	f(3,'#');
return 0;
}
