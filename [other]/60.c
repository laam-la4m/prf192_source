#include <stdio.h>

int main()
{
    //------------//
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);

    //------------//
    puts("\nOUTPUT:");
    //------------//
    int la = strlen(a);
    int lb = strlen(b);
    int i = 0, j = 0;
    while (i < la && j < lb)
    {
        if (a[i] == b[j])
        {
            i++;
        }
        j++;
    }
    if (i == la)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
