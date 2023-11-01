#include <stdio.h>
#include <math.h>

int main ()
{
    //---//
    int i, n, check = 0;
    scanf ("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (sqrt(i) == (int)sqrt(i))
        {
            if (sqrt(n - i) == (int)sqrt(n - i))
            {
                check = 1;
                break;
            }
        }
    }
    //---//
    puts ("\nOUTPUT:");
    //---//
    if (check == 1)
    {
        printf ("1");
    }
    else 
    {
        printf ("0");
    }
}