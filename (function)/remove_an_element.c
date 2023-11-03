#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100];  // Assuming array a has a maximum size of 100
    int n, i, position;

    // Input number of elements and values of each element
    // (You can change this part to get data your way)
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input the position of the element to be deleted
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &position);

    // Algorithm to delete an element from the array
    if (position >= n+1)
        printf("Deletion not possible.\n");
    else
    {
        for (i = position - 1; i < n - 1; i++)
            a[i] = a[i + 1];
    }

    return 0;
}
