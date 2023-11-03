#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100];  // Assuming array a has a maximum size of 100
    int n, i, position, value;

    // Input number of elements and values of each element
    // (You can modify this part to get data in your own way)
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input the position and value of the new element
    printf("Enter the position and value of the new element: ");
    scanf("%d %d", &position, &value);

    // Algorithm to insert an element into the array at a specified position
    for(i = n; i >= position; i--) {
        a[i] = a[i - 1];
    }
    a[position - 1] = value;

    return 0;
}
