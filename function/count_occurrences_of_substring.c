#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100], sub[100];  // Assuming the strings have a maximum size of 100
    int count = 0, i, j, len_str, len_sub, match;

    // Input the string and substring
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the substring: ");
    scanf("%s", sub);

    len_str = strlen(str);
    len_sub = strlen(sub);

    // Algorithm to count occurrences of substring
    for(i = 0; i <= len_str - len_sub; i++) {
        match = 1;  // Assume substring matches unless proven otherwise
        for(j = 0; j < len_sub; j++) {
            if(str[i + j] != sub[j]) {
                match = 0;  // Mismatch found
                break;
            }
        }
        if(match) {
            count++;
        }
    }

    return 0;
}
