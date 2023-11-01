#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    //----//
    int i, n, test = 1;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //----//
    puts("\nOUTPUT:");
    //----//
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            printf("0");
            test = 0;
            break;
        }
    }
    if (test == 1)
    {
        printf("1");
    }

    return (0);
}
