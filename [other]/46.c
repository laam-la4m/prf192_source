#include <stdio.h>
#include <math.h>

int main ()
{
    //---------//
    int a, b, i , j, check, sum = 0, sum_check = 0;
    scanf ("%d%d", &a, &b);
    
    for (i = b; i > a; i--)
    {
        check = 1;
        if (i <= 2)
        {
            check = 0;
        }
        else
        {
            for (j = 2; j <= sqrt (i); j++)
            {
                if (i % j == 0)
                {
                    check = 0;
                    break;
                }
            }
        }
        if (check == 1)
        {
            sum_check++;
            sum += i;
            if (sum_check == 2)
            {
                break;
            }
        }
    }
    //---------//
    puts ("\nOUTPUT:");
    //---------//
    printf ("%d", sum);
}