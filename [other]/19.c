#include <stdio.h>

int main()
{
    //---//
    int a, n = 0;
    scanf("%d", &a);
    //---//
    puts("\nOUTPUT:");
    //---//
    if (a > 0 && (a & (a - 1)) == 0)
    {
        while (a > 1)
        {
            a /= 2;
            n++;
        }
        printf("%d", n);
    }
    else
    {
        printf("%d is not a power of 2", a);
    }
}