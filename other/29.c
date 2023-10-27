#include <stdio.h>

int main()
{
    //---//
    int n, sum = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    //---//
    puts("\nOUTPUT:");
    //---//
    if (sum == n)
    {
        printf("%d is a perfect number", n);
    }
    else
    {
        printf("%d is not a perfect number", n);
    }
}
