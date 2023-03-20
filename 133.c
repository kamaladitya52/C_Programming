#include <stdio.h>

// 1. Create a character array and enter your name through user input. Also display your name.

int main(){

	char a[12];
	printf("Enter your name:");
	scanf("%[^\n]s",a);
	printf("%s\n",a);

	return 0;
}
