#include<stdio.h>

// 2. FIND WHETHER THE GIVEN YEAR IS A LEAP YEAR OR NOT.

int main ()
{
    int a;
    printf("Enter the Year:");
    scanf("%d",&a);
	
	if(a%4==0) {
		if(a%100==0) {
			if(a%400==0)
				printf("%d is a Leap Year.\n",a);
				else
					printf("%d is not a Leap Year.\n",a);
			     }
				else{
					printf("%d is a Leap Year.\n",a);
		   		    }
		    }
	else
		printf("%d is not a Leap Year.\n",a);
return 0;
}
