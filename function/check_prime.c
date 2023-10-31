#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;  // Assuming number is prime unless proven otherwise

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Algorithm to check for prime number
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for(i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;  // Number is divisible by another number, so it's not prime
                break;
            }
        }
    }

    return 0;
}
