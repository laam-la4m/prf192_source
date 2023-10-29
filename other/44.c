#include <stdio.h>

int main()
{
    //---------//
    int a[7], count[100] = {0}, i, max = 0;

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] >= 10 && a[i] <= 99)
        {
            count[a[i]]++;
            if (count[a[i]] > max)
            {
                max = count[a[i]];
            }
        }
    }   
    //---------//
    puts("\nOUTPUT:");
    //---------//
    if (max == 0)
    {
        printf ("no two-digits number");
    }
    else
    {
        for (i = 10; i < 100; i++)
        {
            if (count[i] == max)
            {
                printf("%d ", i);
            }
        }
    }
}
