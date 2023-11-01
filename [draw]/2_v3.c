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
            if (i == 1 || j == i || j == n)//hollow
            //if (j >= i || i == 1 || j == n)//filled
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
