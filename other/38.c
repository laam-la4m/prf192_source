#include <stdio.h>
#include <string.h>

int main()
{
    //------//
    int i, j, min_index;
    char name[5][50], temp[50];

    for (i = 0; i < 5; i++)
    {
        scanf("%s", name[i]);
    }

    for (i = 0; i < 5; i++)
    {
        min_index = i;
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(name[j], name[min_index]) < 0)
            {
                min_index = j;
            }
        }
        strcpy(temp, name[i]);
        strcpy(name[i], name[min_index]);
        strcpy(name[min_index], temp);
    }
    //------//
    puts ("\nOUTPUT:");
    //------//
    for (i = 0; i < 5; i++)
    {
        printf("%s ", name[i]);
    }
}
