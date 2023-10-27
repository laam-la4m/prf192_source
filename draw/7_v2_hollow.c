#include <stdio.h>

int main()
{
    int h, l, i, j;
    scanf("%d", &h);
    scanf("%d", &l);
    printf("\nOUTPUT:\n");
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < l + i; j++)
        {
            if (i == 0)
            {
                if (j < l)
                    printf("*");
                else
                    printf(" ");
            }
            else if (j == i || j == l + i - 1)
            {
                printf("*");
            }
            else if (i == h - 1)
            {
                if (j < l-1)
                    printf(" ");
                else
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
