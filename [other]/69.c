#include <stdio.h>

int main()
{
    //-----------//
    int digits[100], n, i;
    int carry = 1;

    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &digits[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        digits[i] += carry;
        if (digits[i] < 10)
        {
            carry = 0;
            break;
        }
        digits[i] = 0; 
    }
    //----------//
    puts ("\nOUTPUT");
    //----------//
    if (carry == 1)
    {                 
        printf("1 ");
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", digits[i]);
    }
}
