#include <stdio.h>
#include <string.h>

int main()
{
    //----//
    char a[9];
    scanf("%8s", a);
    int i, j;
    for (i = strlen(a) - 1; i >= 0; i--)
    {
        if (a[i] == '1')
        {
            break;
        }
    }
    //----//
    puts("\nOUTPUT:");
    //----//
    for (j = i - 1; j >= 0; j--)
    {
        a[j] = (a[j] == '1') ? '0' : '1';
    }
    printf("%s", a);
}
