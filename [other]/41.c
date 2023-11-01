#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[101];
    gets(a);
    //-----//
    int i, sum = 0;
    for (i = 0; i < strlen(a); i++) {
        if (isdigit(a[i]) && (a[i] - '0') % 2 != 0) {
            sum += a[i] - '0';
        }
    }
    //-----//
    puts ("\nOUTPUT:");
    //-----//
    printf("%d", sum);
}
