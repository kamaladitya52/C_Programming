#include<stdio.h>

// 1. FIND THE MAXIMUM AMONG 3 NUMBER.

int main ()
{
int a,b,c,d;
printf("Enter the 1st number:");
scanf("%d",&a);
printf("Enter the 2nd number:");
scanf("%d",&b);
printf("Enter the 3rd number:");
scanf("%d",&c);

	{
	if(a>b)
		{if (a>c)
			d=a;
		}else
		{
			d=c;
		}
	}
	{
		if(b>c)
			{if (a<b)
				d=b;
			}else
			{
				d=c;
			}
	}
	
	
	printf("Maximum among the three number is %d.\n",d);
return 0;
}
		
		
		
