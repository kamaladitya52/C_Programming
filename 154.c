#include <stdio.h>

// 1. Distinguish between call by value and call by reference. 

// CALL BY REFERENCE.

void swap(int *a, int *b); 
 
int main()
{
    int m = 22, n = 44;
    printf("values before swap m = %d and n = %d",m,n);
    swap(&m, &n);         
}
 
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    printf("\nvalues after swap m = %d and n = %d\n", *a, *b);
}
