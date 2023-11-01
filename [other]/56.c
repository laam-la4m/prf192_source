#include <stdio.h>

int main() {
    int a[5], b[5], c[10];
    int i, j, count = 0, check = 0, temp;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 5; i++) {
        check = 0;
        for (j = 0; j < count; j++) {
            if (a[i] == c[j]) {
                check = 1;
                break;
            }
        }
        if (!check) {
            c[count] = a[i];
            count++;
        }

        check = 0;
        for (j = 0; j < count; j++) {
            if (b[i] == c[j]) {
                check = 1;
                break;
            }
        }
        if (!check) {
            c[count] = b[i];
            count++;
        }
    }

    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (c[i] > c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    puts("\nOUTPUT:");
    for (int i = 0; i < count; i++) {
        printf("%d ", c[i]);
    }
}
