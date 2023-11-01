#include <stdio.h>

int main()
{
    int i, num, total = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (num % 3 == 0 && num % 5 != 0)
        {
            total += num;
        }
    }
    puts("\nOUTPUT:");
    printf("%d", total);
}
