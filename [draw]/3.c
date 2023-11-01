#include <stdio.h>

int main()
{
    int rows, i, j;

    do
    {
        scanf("%d", &rows);
    } 
    while (rows <= 0);

    puts("\nOUTPUT:");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j); // printf natural numbers
            //printf("%d ", (i+j)%2); // 0 and 1 but 0 first
            //printf("%d ", (i+j+1)%2); // 1 and 0 but 1 first
        }
        printf("\n");
        
    }  
}


