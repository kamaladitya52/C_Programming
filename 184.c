#include <stdio.h>

union wow{
    float a;
    char b[4];
}w1,w2;

int main(){
    w1.a = 56.789;
    w2.a = 1.23456;
    
    char temp = w1.b[1];
    w1.b[1] = w2.b[2];
    w2.b[2]= temp;


    temp = w2.b[1];
    w2.b[1] = w1.b[2];
    w1.b[2]= temp; 

    printf("\n%-10f%-10f\n\n", w1.a, w2.a);

}

