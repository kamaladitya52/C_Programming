#include <stdio.h>

/* 2.(A) 1 6 7 12
	 2 5 8 11
	 3 4 9 10
*/
int main(){

    int m, n;
    printf("Enter the number of row: ");
    scanf("%d", &m);

    printf("Enter the number of column: ");
    scanf("%d", &n);

    int array[m][n];
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < m; j++)
            {
                array[j][i] = count;
                count++;
            }
        else
            for (int j = m - 1; j >= 0; j--)
            {
                array[j][i] = count;
                count++;
            }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
