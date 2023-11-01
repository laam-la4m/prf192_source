#include <stdio.h>
#include <math.h>
int main ()
{
    //---//
    int n, sum = 0, check = 0, i;
    scanf ("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
    }
    for (i = 0; i < n; i += 2)
    {
        sum += a[i];
        check ++;
    }
    //---//
    puts ("\nOUTPUT:");
    //---//
    printf ("%.1f", (float)sum/check); // Change .nf base on your test.
}
