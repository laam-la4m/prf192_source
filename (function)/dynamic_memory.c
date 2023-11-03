#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to an integer
    int *ptr;

    // Allocate memory for an integer using malloc
    ptr = (int *)malloc(sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Assign a value to the dynamically allocated memory
    *ptr = 42; // YOU CAN SKIP THIS.

    //YOU CAN USE LIKE THAT:
    int i, n, sum;
    printf("INPUT: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("SUM = %d", sum);
    // Print the value
    printf("The value stored in the dynamically allocated memory: %d\n", *ptr); //SKIP THIS IF U ADD CODE LIKE ABOVE.

    // Free the dynamically allocated memory
    free(ptr);

    return 0;
}
