#include<stdio.h>

// 4. FIND THE 3rd AND 9th BIT OF A GIVEN INTEGER.

int main(){

int a = 267;
    
    int b = 4;
    
    int c = 264;
    
    int d,e,f,g;
   
    d = a & b;
   
    e = a & c;
   
    f = d >>2 ;
    
    g = e >> 8;

    printf("3rd bit is %d.\n",f);
    
    printf("9th bit is %d.\n",g);

return 0;
}
