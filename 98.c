#include <stdio.h>

// 7. 2 9 3 4 8 7 1
//    9 2 4 3 7 8 1
int main()
{
    int n,temp;
    printf("\nENTER NUMBER OF ELEMENTS: ");
    scanf("%d", &n);
    
    printf("\nENTER ELEMENTS: ");
    
    int list[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &list[i]);
    }

    for(int k = 0; k<n-1; k=k+2)
    {
        temp = list[k];
        list[k]= list[k+1];
        list[k+1]= temp;
    }


    printf("\n");
    for(int i = 0; i<n; i++)
    {
        printf("%-10d", list[i]);
    }
    printf("\n\n");
    return 0;
}
