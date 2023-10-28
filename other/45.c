#include <stdio.h>

int main()
{
    //----//
    int a[7], i, j, check, flag;
    int count = 0;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    //----//
    puts("\nOUTPUT:");
    //----//
    for (i = 0; i < 7 && count < 2; i++)
    {
        check = 1;
        flag = 1;
        for (j = 0; j < i; j++)
        {
            if (a[j] == a[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            for (j = i + 1; j < 7; j++)
            {
                if (a[j] == a[i])
                {
                    check++;
                }
            }
            printf("%d %d\n", a[i], check);
            count++;
        }
    }
}
