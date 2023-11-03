#include <stdio.h>
#include <string.h>

int main()
{
    system("cls");
    int n, i, j;
    char names[100][101];
    float score[100];
    char grade[100][20];
    char tempName[101];
    float tempScore;
    char tempGrade[20];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
        scanf("%f", &score[i]);
        if (score[i] < 5)
        {
            strcpy(grade[i], "Trung binh");
        }
        else if (score[i] >= 5 && score[i] < 8)
        {
            strcpy(grade[i], "Kha");
        }
        else
        {
            strcpy(grade[i], "Gioi");
        }
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int swap = 0;
            int compare = strcmp(grade[i], grade[j]);
            if (compare < 0)
            {
                swap = 1;
            }
            else if (compare == 0)
            {
                if (score[i] < score[j])
                {
                    swap = 1;
                }
                else if (score[i] == score[j] && strcmp(names[i], names[j]) > 0)
                {
                    swap = 1;
                }
            }
            if (swap)
            {
                // grade names
                strcpy(tempName, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], tempName);
                // grade score
                tempScore = score[i];
                score[i] = score[j];
                score[j] = tempScore;
                // grade grade
                strcpy(tempGrade, grade[i]);
                strcpy(grade[i], grade[j]);
                strcpy(grade[j], tempGrade);
            }
        }
    }

    puts("\nOUTPUT: ");
    for (i = 0; i < n; i++)
    {
        printf("%s %.1f %s\n", names[i], score[i], grade[i]);
    }
}
