#include <stdio.h>
#include <string.h>

int main()
{
    //---------//
    char str[1000];
    char *words[100];
    int n = 0, prefix;

    fgets(str, 1000, stdin);

    size_t l = strlen(str);
    if (l > 0 && str[l - 1] == '\n')
    {
        str[l - 1] = '\0';
    }

    char *p = strtok(str, " ");
    while (p != NULL && n < 100)
    {
        words[n] = p;
        n++;
        p = strtok(NULL, " ");
    }
    //---------//
    puts("\nOUTPUT:");
    //---------//
    if (n == 0)
    {
        printf("Nothing");
    }
    else
    {
        prefix = strlen(words[0]);
        for (int i = 1; i < n; i++)
        {
            while (strncmp(words[0], words[i], prefix) != 0)
            {
                prefix--;
                if (prefix == 0)
                {
                    printf("");
                    break;
                }
            }
        }
        for (int i = 0; i < prefix; i++)
        {
            printf("%c", words[0][i]);
        }
    }
}
