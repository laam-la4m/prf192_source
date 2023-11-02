#include <stdio.h>
int main()
{
    //----------//
    int n, a[32], index = 0;
    scanf("%d", &n);
    //----------//
    puts("\nOUTPUT:");
    //----------//
    while (n > 0)
    {
        a[index] = n % 2;// binary
        n /= 2;
    }
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}
