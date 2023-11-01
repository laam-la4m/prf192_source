#include <stdio.h>
#include <stdlib.h>

int main()
{   
    //-----------//
    int n;
    scanf("%d", &n);
    //-----------//
    puts("\nOUTPUT:");
    //-----------//
    if (n <= 0)
    {
        printf("false");
        return 0;
    }
    while (n % 2 == 0)
    {
        n /= 2;
    }
    while (n % 3 == 0)
    {
        n /= 3;
    }
    while (n % 5 == 0)
    {
        n /= 5;
    }
    if (n == 1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
