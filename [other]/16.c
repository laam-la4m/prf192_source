#include <Stdio.h>

int main()
{
    //----//
    int n, i;
    int a[10];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //----//
    puts("\nOUTPUT:");
    //----//
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\n", a[i] * a[i]);
        }
    }
}