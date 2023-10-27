#include <stdio.h>
#include <stdlib.h>

int main()
{
    //---//
    int n, i, j, sum, check = 0;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &sum);
    //---//
    puts ("\nOUTPUT:");
    //---//
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {
                printf("%d\n", i);
                printf("%d", j);
                check = 1;
                break;
            }
        }
        if (check)
            break;
    }
}
