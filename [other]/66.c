#include <stdio.h>

int main()
{
    //-------------//
    int tens, units, n;
    const char *single_digits[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    const char *tens_digits[] = {"", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};

    //-------------//
    scanf("%d", &n);

    //-------------//
    puts("\nOUTPUT:");
    //-------------//
    if (n >= 1 && n <= 99)
    {
        tens = n / 10;
        units = n % 10;

        if (tens)
        {
            printf("%s", tens_digits[tens]);
            if (units)
            {
                if (units == 1)
                {
                    printf(" mot");
                }
                else if (units == 5)
                {
                    printf(" lam");
                }
                else
                {
                    printf(" %s", single_digits[units]);
                }
            }
        }
        else
        {
            printf("%s", single_digits[units]);
        }
    }
    //-------------//
}
