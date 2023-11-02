#include <stdio.h>
#include <string.h>

int main()
{
    //-------------//
    char number[20];
    int count = 0, len, i, n, index;
    int mobi, tele;
    scanf("%d", &n);
    for (index = 0; index < n; index++)
    {
        scanf("%s", number);

        len = strlen(number);
        mobi = 0;
        tele = 0;

        if ((len == 10 || len == 11) && number[0] == '0')
        {
            mobi = 1;
            for (i = 1; i < len; i++)
            {
                if (number[i] < '0' || number[i] > '9')
                {
                    mobi = 0;
                    break;
                }
            }
        }
        if (number[0] == '(')
        {
            char *p = strchr(number, ')');
            if (p)
            {
                int area_len = p - number - 1;
                if (area_len >= 2 && area_len <= 4)
                {
                    tele = 1;
                    for (i = 1; i <= area_len; i++)
                    {
                        if (number[i] < '0' || number[i] > '9')
                        {
                            tele = 0;
                            break;
                        }
                    }
                    if (tele)
                    {
                        int tele_len = strlen(p + 1);
                        if (tele_len == 7)
                        {
                            for (i = 1; i <= 7; i++)
                            {
                                if (p[i] < '0' || p[i] > '9')
                                {
                                    tele = 0;
                                    break;
                                }
                            }
                        }
                        else
                        {
                            tele = 0;
                        }
                    }
                }
            }
        }

        if (tele) // if (tele || mobi) can print both of them // if (mobi) can print only mobile number
        {
            count++;
        }
    }
    //-------------//
    puts("\nOUTPUT:");
    //-------------//
    printf("%d", count);
}
