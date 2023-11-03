#include <stdio.h>
#include <string.h>
int main()
{
    int i, check = 0;
    char s[101];
    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = '\0';

    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] -= 32;
    }
    else if (s[0] >= 'A' && s[0] <= 'Z')
    {
        if (s[1] >='a' && s[1] <= 'z')
        {
            s[1] -= 32;
        }
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            check = 0;
        }

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            check ++;
            if (check <=2)
            {
            s[i] -= 32;
            }
            
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            check ++;
        }
    }
    printf("%s", s);
}