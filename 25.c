#include<stdio.h>

/* 		5. TAKE TWO UNSIGNED CHAR
	
			0x35	0x4B
	
			REQUIRED OUTPUT:
 
 			(i.) 0x4B35
 
 			(ii.) 0x34B5				*/

int main(){

   unsigned char a = 0x35;
   
   unsigned char b = 0x4B;
   
   unsigned char c,d;

   c = b << 8;
   
   d = c|a;

   printf("(i.) Required Output: %x%x \n",b,d);

   unsigned char e,f,g,h,i,j,k;
  
   e = a & 0xf0;
   
   f = b & 0xf0;
   
   g = f >>4;

   h = e | g;

   i = b & 0x0F;
   
   i = i << 4;
   
   j = a & 0x0F;

   k = i | j ;

   printf("(ii.) Required Output: %x%x\n",h,k);


return 0;
}
