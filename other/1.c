#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    //---//
    int count = 0, i;
    char s[1000], k[1000];

    fgets(s, sizeof(s), stdin);

    fgets(k, sizeof(k), stdin);

    for (i = 0; s[i]; i++) {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        s[i] = tolower(s[i]);
    }

    for (i = 0; k[i]; i++) {
        if (k[i] == '\n') {
            k[i] = '\0';
            break;
        }
        k[i] = tolower(k[i]);
    }

    char *p = s;
    while ((p = strstr(p, k)) != NULL) 
    {
        count++;
        p++;
    }
    //-----//
    puts ("\nOUTPUT:");
    //-----//
    printf("%d", count);
}
