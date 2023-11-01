#include <stdio.h>

int main ()
{
    //---//
    int n, sum=0;
    scanf ("%d", &n);
    sum += n%10;
    while (n > 9)
    {
        n/=10;
    }
    sum += n;
    //---//
    puts ("\nOUTPUT:");
    //---//
    printf ("%d", sum);
}