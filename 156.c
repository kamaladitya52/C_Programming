#include <stdio.h>

// 2. Pass an array to function which will display the whole array and reverse it. The reverse array to be displayed in the main function.

void func(int p[],int size){
    for (int i = 0; i <size; i++){
        printf("%d ",p[i]);
    }
    int temp;
    for (int j=0,i=size-1; i>size/2; i--,j++){
        temp=p[j];
        p[j]=p[i];
        p[i]=temp;
    }

    printf("\n");
    for (int i = 0; i <size; i++){
        printf("%d ",p[i]);
    }
}

int main(){
	int n;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i <n; i++){
				printf("Enter the value of a[%d]:",i);
				scanf("%d",&a[i]);
	}
    	func(a,n);
printf("\n");
	return 0;
}
