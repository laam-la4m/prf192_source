#include <stdio.h>
#include <stdbool.h>

int main()
{
    //-----------//
    int n, digit, sum, start, end;
    scanf("%d", &n);

    start = n;
    end = n;

    do
    {
        sum = 0;
        while (start)
        {
            digit = start % 10;
            sum += digit * digit;
            start /= 10;
        }
        start = sum;

        sum = 0;
        while (end)
        {
            digit = end % 10;
            sum += digit * digit;
            end /= 10;
        }
        end = sum;

        sum = 0;
        while (end)
        {
            digit = end % 10;
            sum += digit * digit;
            end /= 10;
        }
        end = sum;
    } while (start != end);
    //-----------//
    puts("\nOUTPUT:");
    //-----------//
    if (start == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
