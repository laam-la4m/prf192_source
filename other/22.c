#include <stdio.h>
int main()
{
    //---//
    int i, n;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //---//
    puts("\nOUTPUT:");
    //---//
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
            printf("%d ", a[i]);
    }
}
