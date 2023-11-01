#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    printf("\nOUTPUT:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == n || i == j || j == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        //-----//above: hollow - under: filled
        /*for (j = 1; j <= i; j++)
        {
            printf("*");
        }*/
        printf("\n");
    }
}