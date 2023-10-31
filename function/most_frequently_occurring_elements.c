#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, max_count = 0;
    int a[100];  // Assuming array a has a maximum size of 100

    // Input the number of elements and the values of each element
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Algorithm to find the most frequently occurring element(s)
    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        if(count > max_count) {
            max_count = count;
        }
    }

    // Printing the most frequently occurring element(s)
    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        if(count == max_count) {
            // Check if this element has been printed before
            int already_printed = 0;
            for(j = 0; j < i; j++) {
                if(a[i] == a[j]) {
                    already_printed = 1;
                    break;
                }
            }
            if(!already_printed) {
                printf("%d occurs %d times\n", a[i], max_count);
            }
        }
    }

    return 0;
}
