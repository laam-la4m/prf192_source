#include <stdio.h>

int main()
{
    //---------//
    int n, i, j;
    long value;
    scanf("%d", &n);
    //---------//
    puts("\nOUTPUT:");
    //---------//
    for (i = 0; i < n; i++)
    {
        value = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%ld ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
