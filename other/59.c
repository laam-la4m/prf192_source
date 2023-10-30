#include <stdio.h>
#include <stdlib.h>

int main()
{
    //------------//
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //------------//
    puts("\nOUTPUT:");
    //------------//
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++)
    {
        actualSum += a[i];
    }
    printf("%d", expectedSum - actualSum);
}
