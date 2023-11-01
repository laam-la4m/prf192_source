#include <stdio.h>
#include <string.h>

int main()
{
    //---//
    char s[101];
    int wordCount = 0, charCount = 0, i = 0;

    fgets(s, sizeof(s), stdin);

    if (s[strlen(s) - 1] == '\n')
    {
        s[strlen(s) - 1] = '\0';
    }
    while (s[i] != '\0' && wordCount < 3)
    {
        while (s[i] == ' ' && s[i] != '\0')
        {
            i++;
        }
        if (s[i] != ' ' && s[i] != '\0')
        {   
            wordCount++;
            while (s[i] != ' ' && s[i] != '\0')
            {
                charCount++;
                i++;
            }
        }
    }
    //---//
    puts("\nOUTPUT:");
    //---//
    printf("%d", charCount);
}
