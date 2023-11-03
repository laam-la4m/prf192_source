#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    unsigned char uc;

    // Input the character
    printf("Enter a character: ");
    scanf("%c", &c);
    uc = (unsigned char)c;

    // Convert and print in different bases
    // Binary
    printf("Binary: ");
    for (int i = 7; i >= 0; --i) {
        printf("%d", (uc >> i) & 1);
    }
    printf("\n");

    // Hexadecimal
    printf("Hexadecimal: %X\n", uc);

    // Octal
    printf("Octal: %o\n", uc);

    // Decimal
    printf("Decimal: %d\n", uc);

    return 0;
}