#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];  // Assuming the string has a maximum size of 100
    int count = 0, i, len;

    // Input the string
    printf("Enter a string: ");
    fgets(str, 100, stdin);  // Using fgets to allow spaces in input

    len = strlen(str);

    // Algorithm to count words
    for(i = 0; i < len; i++) {
        // Checking the start of a word
        if((i == 0 && str[i] != ' ') || (i > 0 && str[i-1] == ' ' && str[i] != ' ')) {
            count++;
        }
    }

    return 0;
}
