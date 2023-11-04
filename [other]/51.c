#include <stdio.h>
#include <string.h>

int main() {
    //--------------//
    char p[100];
    int i;
    int check_up = 0, check_num = 0, check_spec = 0, check_lenght = 0;

    scanf("%s", p);

    for (i = 0; i < strlen(p); i++) {
        if (strlen(p) <= 8)
        {
            break;
        }
        if (p[i] >= 'A' && p[i] <= 'Z') {
            check_up = 1;
        }
        if (p[i] >= '0' && p[i] <= '9') {
            check_num = 1;
        }
        if ((p[i] < 'A' || p[i] > 'Z') && (p[i] < 'a' || p[i] > 'z') && (p[i] < '0' || p[i] > '9')) {
            check_spec = 1;
        }
    }
    //--------------//
    puts ("\nOUTPUT:");
    //--------------//
    if (check_up && check_num && check_spec && check_lenght) {
        printf("Valid");
    } else {
        printf("Not Valid");
    }
}
