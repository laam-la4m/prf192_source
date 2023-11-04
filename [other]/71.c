#include <stdio.h>
int main ()
{
    int n, i, j, deep = 999999999;
    scanf ("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if(a[i - 1] > a[i] && a[i] < a[i + 1] )
        {
            if (a[i] < deep)
            {
                deep = a[i];
            }
        }
    }
    puts ("\nOUTPUT:");
    printf ("%d", deep);
}