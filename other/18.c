#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    //----//
    char str[100];
    fgets(str, sizeof(str), stdin);

    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
            /* chuan hoa tu in thuong sang in hoa
            if ((str[i] >= 'a' && str[i] <= 'z')){
                str[i] -= 32;
            }
            */
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    //----//
    puts ("\nOUTPUT:");
    //----//
    printf("%s", str);

    return (0);
}
