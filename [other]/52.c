#include <stdio.h>

int main()
{
    //------//
    int n;
    scanf("%d", &n);
    //------//
    puts("\nOUTPUT:");
    //------//
    int a = 2;
    while (n > 1)
    {
        while (n % a == 0)
        {
            printf("%d ", a);
            n /= a;
        }
        a++;
    }
}
