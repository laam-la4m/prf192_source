#include <stdio.h>
#include <string.h>

int main()
{
    //---------//
    char s[101];
    int i, count = 0, len;
    gets(s);
    //-----------//
    puts("\nOUTPUT:");
    //-----------//
    char *p = strtok(s, " ");
    while (p != NULL)
    {
        len = strlen(p);
        if (p[0] == 'h' && p[len - 1] == 'g')
        {
            count++;
        }
        p = strtok(NULL, " ");
    }

    printf("%d", count);

}
