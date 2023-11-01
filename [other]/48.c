#include <stdio.h>
#include <string.h>

int main() {
    //------------//
    char s[1001];
    fgets(s, sizeof(s), stdin);

    int l= strlen(s) - 1;
    if (s[l] == '\n') {
        s[l] = '\0';
    }

    int last = 0;

    for (int i = l- 1; i >= 0; i--) {
        if (s[i] == ' ') {
            if (last > 0) {
                break;
            }
        } else {
            last++;
        }
    }
    //------------//
    puts("\nOUTPUT:");
    //------------//
    printf ("%d", last);
}
