#include<stdio.h>

/*			6. TAKE TWO UNSIGNED CHAR

			     0X35		0X64

				REQUIRED OUTPUT:
				
				(i.) 0x36

				(ii.) 0x54

								*/
int main(){

   unsigned char a = 0x35;
   
   unsigned char b = 0x64;
   
   unsigned char c,d,e,f;

   c = a & 0xF0;

   d = b & 0xF0;
   
   e = d >> 4;

   f = c|e;

   printf("Required Output: %x \n",f);

   unsigned char g,h,i,j;

   g = a & 0x0F;
   
   h = g << 4;

   i = b & 0x0F;

   j = h|i;

   printf("Required Output: %x \n",j);

return 0;
}
