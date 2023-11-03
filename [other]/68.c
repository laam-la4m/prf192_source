#include <stdio.h>
int main()
{
    //------------//
    char en[101], de[101];
    int i, l;

    scanf("%100s", en);

    l = strlen(en);
    for (i = 0; i < l; i++)
    {
        switch (en[i])
        {
        case 'f':
            de[i] = '0';
            break;
        case 'p':
            de[i] = '1';
            break;
        case 't':
            de[i] = '2';
            break;
        case 'u':
            de[i] = '3';
            break;
        case 'c':
            de[i] = '4';
            break;
        case 'a':
            de[i] = '5';
            break;
        case 'n':
            de[i] = '6';
            break;
        case 'T':
            de[i] = '7';
            break;
        case 'h':
            de[i] = '8';
            break;
        case '0':
            de[i] = '9';
            break;
        }
    }
    de[l] = '\0';
    //------------//
    puts ("\nOUTPUT:");
    //------------//
    printf("%s", de);
}
