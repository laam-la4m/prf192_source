#include <stdio.h>

int main()
{
    //--------//
    int n, i, j;

    scanf("%d", &n);
    //--------//
    puts("\nOUTPUT:");
    //--------//
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
            printf(" ");

        for (j = i; j <= n; j++)
            printf("* ");

        printf("\n");
    }
}