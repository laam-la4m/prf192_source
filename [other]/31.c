#include <stdio.h>
int main()
{
    //------------//
    int i, j, k = 0, t = 0;
    char s[100];
    gets(s);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            k = k + 1;
        }
        else if (k == 3)
        {
            for (j = 1; j <= i; j++)
            {
                t = j - 3;
            }
            break;
        }
    }
    //------------//
    puts("\nOUTPUT:");
    //------------//
    printf("%i", t);
}