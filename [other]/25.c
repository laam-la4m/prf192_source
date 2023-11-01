#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    int a[n], vt;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &vt);
    int x;
    scanf("%d", &x);
    for (i = n; i > vt; i--)
    {
        a[i] = a[i - 1];
    }
    a[vt] = x;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return (0);
}
