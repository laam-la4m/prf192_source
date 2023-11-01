#include <stdio.h>
//fraction
int main() {
    //-------------//
    int n1, d1, n2, d2, numerator, denominator, a, b;
    scanf("%d%d%d%d", &n1, &d1, &n2, &d2);
    //-------------//
    puts("\nOUTPUT:");
    //-------------//
    numerator = n1 * d2 + n2 * d1;
    denominator = d1 * d2;

    a = numerator; 
    b = denominator;
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    int common_gcd = a;

    numerator /= common_gcd;
    denominator /= common_gcd;

    // Print the result
    printf("%d %d", numerator, denominator);
}
