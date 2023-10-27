#include <stdio.h>

int main ()
{
    //----//
    int n, multi = 1;
    scanf ("%d", &n);
    while (n > 0)
    {
        multi *= (n%10);
        n/=10;
    }
    //----//
    puts ("\nOUTPUT:");
    //----//
    printf ("%d", multi);
}