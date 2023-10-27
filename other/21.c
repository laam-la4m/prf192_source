#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    //---//
    char ho_ten[100];
    fgets(ho_ten, sizeof(ho_ten), stdin);

    char ho[50], ten[50];
    int i, j, n = strlen(ho_ten);

    for (i = 0; i < n; i++)
    {
        if (ho_ten[i] == ' ' || ho_ten[i] == '\n')
        {
            ho[i] = '\0';
            i++;
            break;
        }
        ho[i] = ho_ten[i];
    }

    for (j = 0; i < n; i++, j++)
    {
        if (ho_ten[i] == '\n')
        {
            ten[j] = '\0';
            break;
        }
        ten[j] = ho_ten[i];
    }
    //---//
    puts("\nOUTPUT:");
    //---//
    printf("%s\n", ho);
    printf("%s\n", ten);
}
