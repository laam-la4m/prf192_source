#include <stdio.h>

int main()
{
    //---------------//
    char s1[100], s2[50], s3[50];
    scanf("%s%s%s", s1, s2, s3);
    //---------------//
    puts("\nOUTPUT:");
    //---------------//
    char *last = NULL, *temp;

    temp = s1;
    while (temp = strstr(temp, s2))
    {
        last = temp;
        temp += strlen(s2);
    }

    if (last)
    {
        char buffer[100];
        strncpy(buffer, s1, last - s1);
        buffer[last - s1] = '\0';
        strcat(buffer, s3);
        strcat(buffer, last + strlen(s2));
        strcpy(s1, buffer);
    }

    printf("%s", s1);
}
