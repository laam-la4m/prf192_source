#include <stdio.h>

int main()
{   
    //---------//
    int n;
    scanf("%d", &n);
    //---------//
    puts("\nOUTPUT:");
    //---------//
    int a = 0, b = 1;
    while (a < n)
    {
        printf("%d ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }
}
