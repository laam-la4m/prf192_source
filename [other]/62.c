#include <stdio.h>
#include <string.h>

int main()
{
    //--------//
    char s[201];
    fgets(s, sizeof(s), stdin);
    s[strlen(s) - 1] = '\0';

    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] -= 32;
    }

    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i - 1] == ' ')
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
    }
    //----------//
    puts("\nOUTPUT:");
    //----------//
    printf("%s", s);
    return 0;
}