#include <stdio.h>

//2. Interchange two values using pointer.

int main()
{

   int x, y, *a, *b, t;
 
   printf("Enter the value of x:");
   scanf("%d",&x);
   
   printf("Enter the value of y:");
   scanf("%d",&y);
 
   a = &x;
   b = &y;
 
   t = *b;
  *b = *a;
  *a =  t;
 
   printf("After Swapping x = %d\n",x);
   printf("After Swapping y = %d\n",y);

return 0;
}
