#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    //----//
    int i;
    char str[100];
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    int length = strlen(str);
    for (i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    // char *pstr = strrev (str);|| co the dung ham nay thay cho cau lenh tu 15-19
    //----//
    puts ("\nOUTPUT:");
    //----//
    printf("%s", str);
    //----//
    return (0);
}
