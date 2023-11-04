#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    //-----------//
    char a[101];
    scanf("%s", a);
    //-----------//
    puts("\nOUTPUT:");
    //-----------//
    int len = strlen(a), check = 1, i;
    for (i = 0; i < len / 2; i++)
    {
        char ch1 = (a[i] >= 'A' && a[i] <= 'Z') ? a[i] + ('a' - 'A') : a[i];
        char ch2 = (a[len - 1 - i] >= 'A' && a[len - 1 - i] <= 'Z') ? a[len - 1 - i] + ('a' - 'A') : a[len - 1 - i];
        if (ch1 != ch2)
        {
            check = 0;
            break;
        }
    }
    printf("%d", check);
}
