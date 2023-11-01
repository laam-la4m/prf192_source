#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    //---//
    int n, i, j;
    scanf ("%d", &n);
    char a[n];
    int b[n];

    for (i = 0; i < n; i++)
    {
        b[i] = 0;
        scanf (" %c", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                b[i]++;
            }
        }
    }

    int max_1= -1, max_2 = -1, index_1 = -1, index_2 = -1;
    for (i = 0; i < n; i++)
    {
        if (b[i] > max_1)
        {
            max_2 = max_1;
            index_2 = index_1;
            max_1 = b[i];
            index_1 = i;
        }
        else if (b[i] > max_2 && a[i] != a[index_1])
        {
            max_2 = b[i];
            index_2 = i;
        }
    }
    //---//
    puts ("\nOUTPUT:");
    //---//
    printf ("%c\n", a[index_1]);
    if (index_2 != -1) {
        printf("%c", a[index_2]);
    }
}
