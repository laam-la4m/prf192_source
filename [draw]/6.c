#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    printf("\nOUTPUT:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            //if (j <= n + i - 1 && j >= n - i + 1)//filled
            if (j == n + i - 1 || j == n - i + 1)//hollow
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (i = n-1; i >= 1; i--)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            //if (j <= n + i - 1 && j >= n - i + 1)//filled
            if (j == n + i - 1 || j == n - i + 1)//hollow
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}
