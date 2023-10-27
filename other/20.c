#include <stdio.h>

int main()
{
    int i, n, k=1;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            k = 0;
            break;
        }
    }
    //---//
    puts("\nOUTPUT:");
    //---//

    printf("%d", k);
}
