#include <stdio.h>

int main()
{
    //---------//
    int n, m, i, j, check = 0;
    int a[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);
    //---------//
    puts("\nOUTPUT:");
    //---------//
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == m)
            {
                printf("%d %d", i, j);
                check = 1;
                break;
            }
        }
        if (check)
            break;
    }
    if (!check)
        printf("Nothing.");
    
}
