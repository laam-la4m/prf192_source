#include <stdio.h>

int main()
{
    //------------//
    int n;
    scanf("%d", &n);

    int h[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }

    int deep = -1;
    for (int i = 1; i < n - 1; i++)
    {
        if (h[i - 1] > h[i] && h[i] < h[i + 1])
        {
            if (deep == -1 || h[i] < deep)
            {
                deep = h[i];
            }
        }
    }
    //------------//
    puts ("\nOUTPUT:");
    //------------//
    printf("%d", deep);
}
