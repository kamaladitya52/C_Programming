#include<stdio.h>

// 1. Display 1 to n using and n to 1 using goto. 

int main (){
int i,n; 
i=1;
printf("Enter the value of n:");
scanf("%d",&n);
kp:
printf("%d \n",i);
i++;
if (i<=n)
goto kp;
printf("Reverse Order:\n");
int j=n;
sp:
printf("%d \n",j);
j--;
if (j>=1)
goto sp;
return 0;
}
