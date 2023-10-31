#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, min_idx, temp;
    int a[100];  // Assuming array a has a maximum size of 100

    // Input the number of elements and the values of each element
    // (You can modify this part to get data in your own way)
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort algorithm
    for(i = 0; i < n-1; i++) {
        min_idx = i;
        for(j = i+1; j < n; j++) {
            if(a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }

    return 0;
}
