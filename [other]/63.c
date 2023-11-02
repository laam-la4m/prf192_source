#include <stdio.h>

int main() {
    //------------//
    char s[1000], t[1000];
    int a, b;
    gets(s);
    //------------//
    puts("\nOUTPUT:");
    //------------//
    a = 0;
    b = 0;
    while (s[a] == ' ') {
        a++;
    }
    while (s[a]) {
        if (s[a] != ' ' || (s[a] == ' ' && s[a+1] != ' ')) {
            t[b++] = s[a];
        }
        a++;
    }
    if (t[b-1] == ' ') {
        t[b-1] = '\0';
    } else {
        t[b] = '\0';
    }
    printf("%s", t);
}
