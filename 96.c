#include <stdio.h>

// 5.	2 9 4 6 8 7 4
//	8 7 4 6 2 9 4
int main()
{
    int n,temp;
 //   printf("ENTER NUMBER OF ELEMENTS: ");
 //   scanf("%d", &n);
 
 	n=7;
    
    printf("ENTER  ELEMENTS: ");
    int list[n],mid=n/2;

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &list[i]);
    }

    for(int k = 0; k<mid; k++)
    {
        temp = list[k];
        list[k]= list[mid+k+1];
        list[mid+k+1]= temp;
    }
printf("\nRequired Output:");
    for(int i = 0; i<n; i++)
    {
        printf("%-2d", list[i]);
    }
    printf("\n\n");
    return 0;
}
