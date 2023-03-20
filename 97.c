#include <stdio.h>

// 6. 2 9 3 4 8 7 1 4
//    2 11 14 18 .....

int main()
{
    int n,temp;
    printf("\nENTER NUMBER OF ELEMENTS: ");
    scanf("%d", &n);
    
    printf("ENTER ELEMENTS:s : ");
    
    int list[n],add[n],sub[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &list[i]);
    }

    add[0]=list[0];
    for(int i=1; i<n; i++){
        add[i]=add[i-1]+list[i];
    }

    sub[n-1]=list[n-1];

    for(int i = n-2; i>=0; i--){
        sub[i]=sub[i+1]-list[i];
    }
    

    printf("\n");
    printf("Addition :- ");
    for(int i = 0; i<n; i++)
    {
        printf(" %-10d", add[i]);
    }
    printf("\n\n");
    printf("subtraction :- ");
    for(int i = 0; i<n; i++)
    {
        printf(" %-10d", sub[i]);
    }
    printf("\n\n");
    return 0;
}
