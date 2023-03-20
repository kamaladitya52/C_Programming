#include<stdio.h>

// 6. Write the nth Fibonacci Number.

int fibo(int n){
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fibo(n-1) + fibo(n-2) );
}
int main()
{
   int n, i = 0;
   printf("Enter the no. of terms:");
   scanf("%d",&n);
 
   printf("Fibonacci series: ");
 
   for (int j = 1 ; j <= n ; j++ )
   {
      printf("%d ", fibo(i));
      i++; 
   }
 printf("\n");
   return 0;
}


