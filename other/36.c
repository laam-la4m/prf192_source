#include <stdio.h>

int main()
{
    int row, col, i, j;
    scanf("%d%d", &row, &col);
    int a[row][col], b[row][col], output[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nOUTPUT:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            output[i][j] = a[i][j] + b[i][j]; // Change '+' -> '-'
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", output[i][j]);
            if (j < col - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
