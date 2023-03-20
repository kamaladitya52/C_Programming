#include<stdio.h>

// 5. Write a recurssive function for returning the reverse of a given number.

int sum=0,rem;
int reverse_fun(int n){
   if(n){
      rem=n%10;
      sum=sum*10+rem;
      reverse_fun(n/10);
   }
   else
      return sum;
   return sum;
}

int main(){
   int n,reverse_n;
   printf("Enter the number:");
   scanf("%d",&n);
   reverse_n=reverse_fun(n);
   printf("After reverse the no. is: %d",reverse_n);
   return 0;
}

