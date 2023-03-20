#include <stdio.h>

// 6. Find all the prime numbers in between two given integer.

int main(){
   
   int number1,number2,i,j,flag;
   
   printf("Enter the 1st number:");
   scanf("%d",&number1);
    printf("Enter the 2nd number:");
   scanf("%d",&number2);
   printf("Prime no’s present in between %d and %d:\n",number1,number2);
   for(i=number1+1;i<number2;i++){// interval between two numbers
      flag=0;
      for(j=2;j<=i/2;++j){ //checking number is prime or not
         if(i%j==0){
            flag=1;
            break;
         }
      }
      if(flag==0)
         printf("%d\n",i);
   }
   return 0;
}
