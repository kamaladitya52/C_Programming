#include<stdio.h>

// 1. Create an array of 5 size array and fill the array with user input, and also display the array both in forward and backward direction.

int main (){
 int a[5],i;
 printf("Enter the five values: ");
 for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Values of Array:\n");
   for(i=0;i<5;i++)
  {
    printf("a[%d]: ",i);
    printf("%d\n",a[i]);
  }
  
  printf("Forward Order:");
  for(i=0;i<5;i++)
  {
    printf("%d ",a[i]);
  }
  
  printf("\nBackward Order:");
  for(i=4;i>=0;--i)
  {
    printf("%d ",a[i]);
  }
printf("\n");  
return 0;
}
