#include <stdio.h>

//4. Take an integer and round off upto 2 digit number.
//	1593 ---------> 1600
//	1543 ---------> 1500

int main() 
{
    int a,b;
    int d,c;
    printf("ENTER A FOUR DIGIT NUMBER:");
    scanf("%d" , &a);
    d=a%100;
    b=a/100;
    if (d>=50)
        { 
          c=(b+1)*100;
        }else 
        {
            c=b*100;
        }
        printf("Rounded off number is %d.\n",c);
return 0;
}
