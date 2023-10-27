#include <stdio.h>

int main()
{
    int h, l, i, j;
    scanf("%d", &h);
    scanf("%d", &l);
    printf("\nOUTPUT:\n");
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < l + (h - 1) - i; j++)
        {
            if (i == h - 1)
            {
                if (j < l)
                    printf("*");
                else
                    printf(" ");
            }
            else if (j == (h - 1) - i || j == l + (h - 2) - i)
            {
                printf("*");
            }
            else if (i == 0)
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
