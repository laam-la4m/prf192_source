#include <stdio.h>
#include <math.h>

int main ()
{
    int n, i, check = 1;
    scanf ("%d", &n);

    if (n < 2)
    {
        check = 0;
    }
    else
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                check = 0;
                break;
            }
        }
    }

    puts ("\nOUTPUT:");

    if (check)
    {
        printf ("%#x", n);
    }
    else 
    {
        printf ("%d is not a prime number", n);
    }
}