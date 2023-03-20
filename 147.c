#include<stdio.h>

// 5. Write a function to display fibonacci series.

void fib(int n)
{
   int a=0, b=1, c;
   for(int i=0; i<n; i++)
   {
     printf("%d, ", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int n_term;

   printf("Enter the number of elements:");
   scanf("%d", &n_term);

   printf("The fibonacci series is: ");

   fib(n_term);

   return 0;
}
