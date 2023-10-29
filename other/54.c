#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    int len;

    gets(str1);
    gets(str2);

    strcpy(str3, str1);
    strcat(str3, str2);

    puts("\nOUTPUT:");
    printf ("%s", str3);

    return (0);
}