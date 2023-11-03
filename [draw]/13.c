#include <stdio.h>
#include <math.h>

int main()
{
    //------------//
    int h, i, j;
    scanf("%d", &h);
    //------------//
    puts("\nOUTPUT:");
    //------------//
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j < 2 * h; j++)
        {
            if (abs(h - j) <= (i - 1))
            {
                printf("%3d", i - abs(h - j));
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    //------------//
}