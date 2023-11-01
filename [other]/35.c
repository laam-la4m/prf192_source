#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[101];
    int i;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    if(islower(s[0])) {
        s[0] = toupper(s[0]);
    }
    if(islower(s[1])) {
        s[1] = toupper(s[1]);
    }

    for(i = 1; i < strlen(s) - 1; i++) {
        if(s[i] == ' ' && islower(s[i+1])) {
            s[i+1] = toupper(s[i+1]);
            if(islower(s[i+2])) {
                s[i+2] = toupper(s[i+2]);
            }
        }
    }

    puts("\nOUTPUT:");  

    printf("%s", s);

    return 0;
}
