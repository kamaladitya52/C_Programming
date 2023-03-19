#include<stdio.h>

// 2.TAKE A 'N' DIGIT INTEGER NUMBER AND DISPLAY IN ITS WORD.

int main ()
{
int n, num = 0;

    printf("Enter the number to print in words: ");
    scanf("%d", &n);
while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }while(num != 0)
    {

switch (num % 10)
	{
	  case 1 : printf("one \t");
	  	  break;
	  case 2 : printf("two \t");
	  	  break;
	  case 3 : printf("three \t");
	  	  break;
	  case 4 : printf("four \t");
	  	  break;
	  case 5 : printf("five \t");
	          break;
	  case 6 : printf("six \t");
	  	  break;
	  case 7 : printf("seven \t");
	  	  break;
	  case 8 : printf("eight \t");
	  	  break;
	  case 9 : printf("nine \t");
	  	  break;
	  case 0 : printf("zero \t");
	  	  break;
	  }
        
        num = num / 10;	 	  	  
    }
    printf("\n");
	
return 0;
}
