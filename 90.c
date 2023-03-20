#include<stdio.h>

/* 5.	1 1 1 1 1
	1 2 2 2 1
	1 2 3 2 1
	1 2 2 2 1
	1 1 1 1 1
*/

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 2 && j == 2)
            {
                printf("3 ");
            }
            else if (i == 0 || i == 4 || j == 0 || j == 4)
                printf("1 ");
            else
                printf("2 ");
        }
        printf("\n");
    }

return 0;
}

