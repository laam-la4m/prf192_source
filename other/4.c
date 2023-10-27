#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    //---//
    srand(time(NULL));

    int n, i, j;
    scanf ("%d", &n);
    char a[n];

    if (n <= 0 || n > 26)
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        a[i] = rand () % 26 + 'a';   
    }

    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[i] = rand () % 26 + 'a';
                i = 0;
            }
        }
    }
    //---//
    puts ("\nOUTPUT:");
    //---//
    for (i = 0; i< n; i++)
    {
        printf ("%c", a[i]);
    }
}