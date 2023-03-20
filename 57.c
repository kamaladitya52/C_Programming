#include<stdio.h>

// 5. Find whether a number is prime or not.

int main (){
int num, f = 0;
int i=2 ;
printf("Enter the number:");
scanf("%d",&num);
   while(i < num/2) 
   {
   
      if(num%i == 0) {
         printf("%d is not a prime number", num);
         f = 1;
         break;
      
      }
    i++;  
   }
   if(f == 0) {
      printf("%d is a prime number", num);
   }
   printf("\n");

return 0;
}
