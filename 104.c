#include<stdio.h>

//3.	50 47 40 29 22 35 44 49

int main (){
 int n, x;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d", &n);
    printf("ENTER NUMBER:");
    scanf("%d", &x);
    int list[n], minus = 0;

    for (int i = 0; i < n / 2; i++)
    {
        list[i] = x - minus;
        minus++;
        x = list[i];
        list[n - 1 - i] = x - minus;
        minus++;
        x = list[n - 1 - i];
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%-10d", list[i]);
    }
    printf("\n");

return 0;
}
