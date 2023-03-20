#include<stdio.h>

// 3. Write a recursive function for displaying each digits of a number both in forward and backward direction.

void forward(int n)
{
	int d;
	if (n == 0) {
		return;
	}
	d = n % 10;
	forward (n/10);
	printf("%d ", d);
}
void backward(int n)
{
	int d;
	if (n == 0) {
		return;
	}
	d = n % 10;
	printf("%d ", d);
	backward (n/10);
	
}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d" ,&n);
	printf("Forward:");
	forward(n);
	printf("\nBackward:");
	backward(n);
	printf("\n");
	return 0;
}
