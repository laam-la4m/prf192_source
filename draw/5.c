#include <stdio.h>

int main()
{
    int n, i, j;
    char ch;
    scanf("%d", &n);
    printf("\nOUTPUT:\n");

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }
        for(j = i - 2; j >= 0; j--)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
}
