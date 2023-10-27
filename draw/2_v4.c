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
            if (i == 1 || j == n - i + 1 || j == 1)//hollow
            //if (j <= n - i + 1 || i == 1 || j == 1)//filled
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
