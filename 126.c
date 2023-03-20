#include <stdio.h>

// 1. Take every type of pointer and through these pointers, you need to receive the value from the keyboard and also display it
// 	Types:- int,float,char.

int main()
{
    int i;
    int *a=&i;
   
    float f;
    float *b=&f;
   
  //  char c;
   // char *c=&j;
    
    printf("Enter the integer:");
    scanf("%d",a);
    printf("The integer is %d\n",i);
    
   // printf("Enter the char:\n");
   // scanf("%c",c);
   // printf("The float is %c.\n",j);

    printf("Enter the float:");
    scanf("%f",b);
    printf("The float is %f\n",f);

    return 0;
}
