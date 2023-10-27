#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    printf("\nOUTPUT:\n");
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (i == 1 || j == i || j == 2 * n - i)//hollow
            //if (j >= i && j <= 2 * n - i) //filled
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
