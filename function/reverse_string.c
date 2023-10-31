#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[100];  // Assuming the string has a maximum size of 100
    int length, i;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", s);

    // Get the length of the string
    length = strlen(s);

    // Algorithm to reverse the string
    for(i = 0; i < length/2; i++) {
        char temp = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = temp;
    }

    return 0;
}
