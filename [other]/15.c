#include <stdio.h>

int main()
{
    int i;
    char s[101];
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (i % 2 != 0 && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
    }

    puts("\nOUTPUT:");
    printf("%s", s);

    return 0;
}
