#include <stdio.h>

int main()
{
    //---//
    int a[7];
    int b[7] = {0};
    int i, j;

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 7; i++)
    {
        if (a[i] % 2 == 0)
        {
            for (j = 0; j < 7; j++)
            {
                if (a[i] == a[j])
                {
                    b[i]++;
                }
            }
        }
    }

    int max = -1;
    for (i = 0; i < 7; i++)
    {
        if (b[i] > max)
        {
            max = b[i];
        }
    }
    //---//
    puts("\nOUTPUT:");
    //---//
    if (max <= 0)
    {
        printf("Pew!!!");
    }
    else
    {
        for (i = 0; i < 7; i++)
        {
            if (b[i] == max)
            {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
}
