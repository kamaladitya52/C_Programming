#include<stdio.h>

// 1. Display 1 to n and n to 1 using do while.

int main (){
int i, n;
printf("Enter the value of n: ");
scanf("%d",&n);
i = 1;
do
  {
        printf("%d \n", i);
        i++;
  } while (i <= n);
printf("Reverse Order:\n");
int j = n;
do
  {
        printf("%d \n",j);
        j--;
  } while (j >= 1);
return 0;
}

