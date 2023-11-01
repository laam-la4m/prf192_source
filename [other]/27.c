#include <stdio.h>

int main()
{
    //----//
    int n, i, j;
    scanf("%d", &n);
    int a[n][n], sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }
    //----//
    puts("\nOUTPUT:");
    //----//
    printf("%d", sum);
    return (0);
}
