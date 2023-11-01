#include <stdio.h>

int main()
{
    int h, l, i, j;
    scanf("%d", &h);
    scanf("%d", &l);
    printf("\nOUTPUT:\n");
    for (i = h-1; i >= 0; i--)
    {
        for (j = 0; j < l + h - 1; j++)
        {
            if (j < l + i && j >= i)
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
    return 0;
}
