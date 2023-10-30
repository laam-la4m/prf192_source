#include <stdio.h>

int main()
{
    //-------//
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    //-------//
    puts("\nOUTPUT:");
    //------//
    int start = 0;
    int end = 0;
    for (int i = 0; i < 7; i++)
    {
        start = a[i];
        while (i + 1 < 7 && a[i + 1] == a[i] + 1)
        {
            i++;
        }
        end = a[i];
        if (start == end)
        {
            printf("%d\n", start);
        }
        else
        {
            printf("%d %d\n", start, end);
        }
    }
}
