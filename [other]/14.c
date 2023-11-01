#include <stdio.h>

int main()
{
    //---//
    int n, p;
    int a[10];
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &p);    
    p--;
    for (i = p; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    //---//
    puts("\nOUTPUT:");
    //---//
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
