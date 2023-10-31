#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, k;
    int a[100];  // Assuming array a has a maximum size of 100

    // Input the number of elements and the values of each element
    // (You can modify this part to get data in your own way)
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Algorithm to remove duplicate elements
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n;) {
            if(a[j] == a[i]) {
                for(k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    return 0;
}
