#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[100];  // Assuming the string has a maximum size of 100
    int n;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", s);

    // Input the position
    printf("Enter the position: ");
    scanf("%d", &n);

    // Validate the position
    if (n > 0 && n <= strlen(s)) {
        // Array indexing starts at 0, so we subtract 1 from n
        char character = s[n - 1];

        // As per your instruction, not printing the character found
    } else {
        printf("Position out of range\n");
    }

    return 0;
}
