#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    //---//
    int i, n;
    scanf ("%d", &n);
    char s[n][100], search;
    for (i = 0; i < n; i++)
    {
        scanf ("%s", s[i]);
    }

    scanf(" %c", &search);
    //---//
    puts ("\nOUTPUT:");
    //---//
    for (i = 0; i < n; i++)
    {
        if (toupper(search) == s[i][0] || tolower(search) == s[i][0])
        {
            printf ("%s\n", s[i]);
        }
    }
}