#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, digit;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Algorithm to separate digits
    while(num > 0) {
        digit = num % 10;  // Get the last digit
        num = num / 10;   // Remove the last digit
        
        // As per your instruction, not printing the digits separated
    }

    return 0;
}
