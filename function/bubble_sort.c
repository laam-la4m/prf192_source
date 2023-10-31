#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, temp;
    int a[100];  // Assuming array a has a maximum size of 100

    // Input the number of elements and the values of each element
    // (You can modify this part to get data in your own way)
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble Sort algorithm
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    return 0;
}
