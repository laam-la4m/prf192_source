#include <stdio.h>
#include <ctype.h>

int main()
{
    //-----//
    int i;
    char s[101];
    scanf("%s", s);
    
    for (i = 0; s[i] != '\0'; i++)
    {
        if (i % 2 != 0 && isalpha(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }
    //-----//
    puts ("\nOUTPUT:");
    //-----//
    printf("%s", s);
}