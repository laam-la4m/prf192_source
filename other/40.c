    #include <stdio.h>

    int main() {
        int i, j;
        char a[4], temp;
        for (i = 0; i < 4; i++) {
            scanf(" %c", &a[i]);
        }

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3 - i; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        puts("\nOUTPUT:");
        for (i = 0; i < 4; i++) {
            printf("%c ", a[i]);
        }
        
        return 0;
    }
