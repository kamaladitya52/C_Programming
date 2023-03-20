#include <stdio.h>

// 4. Write a function which will take a float and return the values present before decimal and after decimal.


void func(float x,float *after,int *before){
    *before= (int) (x);
    *after=x-*before;
}

int main (){
    float x,after;
    int before;
    printf("Enter the float value:");
    scanf("%f",&x);
    func(x,&after,&before);
    printf("%d\n%f",before,after);

	return 0;
}
