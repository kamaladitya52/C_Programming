#include<stdio.h>

// 2. Display the multiplication table.

int main (){
int a,c;
   printf("Enter the integer value to print multiplication table:");
   scanf("%d", &a);
   int b = 1;
   while(b<=10)
{ 
   c = a * b;
   printf("%d * %d = %d \n", a,b,c);
   b=b+1;

}
return 0;
}
