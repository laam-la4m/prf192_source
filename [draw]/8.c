#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    printf("\nOUTPUT:\n");

    int num = 2, check, i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            check = 1;
            for (k = 2; k <= sqrt(num); k++)
            {
                if (num % k == 0)
                {
                    check = 0;
                    break;
                }
            }
            while (check == 0)
            {
                num++;
                check = 1;
                for (k = 2; k <= sqrt(num); k++)
                {
                    if (num % k == 0)
                    {
                        check = 0;
                        break;
                    }
                }
            }
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}