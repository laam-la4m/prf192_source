#include <stdio.h>
#include <string.h>

int main ()
{
    //---//
    char a[100], b[100], c[100];
    int b_len, i, j, temp, index = -1;
    
    gets(a);
    gets(b);

    b_len = strlen(b);

    strcpy(c, b);
    for (i = 0; i < b_len/2; i++)
    {
        temp = c[i];
        c[i] = c[b_len - i - 1];
        c[b_len - i - 1] = temp; 
    }

    char *p = a;
    while ((p = strstr(p, b)) != NULL)
    {
        index = p - a;
        for (i = index, j = 0; j < b_len; i++, j++)
        {   
            a[i] = c[j];
        }
        p += b_len;
    }
    //---//
    puts ("\nOUTPUT:");
    //---//
    printf("%s", a);
}
