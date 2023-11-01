#include <stdio.h>
#include <string.h>

int main()
{
    //---//
    char s[1000];
    fgets(s, sizeof(s), stdin);
    //---//
    puts("\nOUTPUT:");
    int len = strlen(s);
    //---//
    for (int i = 0; i < len; i++)
    {   
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
        printf("%c", s[i]);
    }
}
