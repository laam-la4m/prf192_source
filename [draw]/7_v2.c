#include <stdio.h>

int main() {
    int h;
    scanf("%d", &h);

    printf("\nOUTPUT:\n");
    for (int i = h; i >= 1; i--) {
        for (int j = 1; j <= h - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= h; k++) {
            printf("* ");//filled
            /*if (k == 1 || k == h || i == h || i == 1) { //hollow
            printf("* ");
            } else {
                printf("  ");
            }*/
        }
        printf("\n");
    }

    return 0;
}
