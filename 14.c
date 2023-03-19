#include<stdio.h>
int main()
{
printf("Sl.No.     Amount      Discount\n");
int a= 1; float b= 12.96; float u= 1.200;
int d= 2; float e= 132.63; float v= 20.230;
int g= 3; float h= 1792.68; float w= 323.136;


printf("%-10d $%10.2f $%-10.3f\n",a,b,u);
printf("%-10d $%10.2f $%-10.3f\n",d,e,v);
printf("%-10d $%10.2f $%-10.3f\n",g,h,w);
   
return 0;
   
}
