#include <stdio.h>

int main()
{
    //---------//
    int n, i, j, k;
    long value;
    scanf("%d", &n);
    //---------//
    puts("\nOUTPUT:");
    //---------//
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }
        value = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%ld", value);
            if(j < i) printf(" ");
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
