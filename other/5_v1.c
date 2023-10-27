#include <stdio.h>
#include <string.h>

int main ()
{
    //---//
    int n, i;
    char search;

    scanf ("%d", &n);
    char name[n][100];

    for (i = 0; i < n; i++)
    {
        scanf ("%s", name[i]);
    }

    getchar();

    scanf ("%c", &search);
    //---//
    puts ("\nOUTPUT:");
    //---//
    for (i = 0; i < n; i++)
    {
        if (search == name[i][0])
        {
            printf ("%s\n", name[i]);
        }
    }
}