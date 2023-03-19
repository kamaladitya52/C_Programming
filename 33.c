#include<stdio.h>
// 6. FIND THE EACH BYTE OF AN INTEGER
//	a=0X34AB4CD2
int main (){
	int a = 0x34AB4CD2;
	int b,c,d,e,f,g,h;
	b = a & 0xFF000000;
	f = b >> 24;
	c = a & 0x00FF0000;
	g = c >> 16;
	d = a & 0x0000FF00;
	h = d >> 8;
	e = a & 0x000000FF;
	printf("%x\n",f);
	printf("%x\n",g);
	printf("%x\n",h);
	printf("%x\n",e);
return 0;
}
