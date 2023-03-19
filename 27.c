#include<stdio.h>

/* 7. GIVEN INTEGER:
	
	0X1296AB42
	
OUTPUT:0X12AB9642

*/

int main(){

    int a = 0x1296AB42;
    
    int b,c,d,e,f;
    
    b = a & 0xFF000000;
    
    c = a & 0x0000FF00;
    
    c = c << 8;
    
    d = a & 0x00FF0000;
    
    d = d >> 8;

    e = a & 0x000000FF;
    

    f = b | c | d | e ;
    
    
    printf("%x \n",f);


return 0;
}
