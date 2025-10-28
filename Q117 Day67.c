#include <stdio.h>

int main() {
    int m, n;

    // Input sizes of both arrays
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n], merged[m + n];
    int i, j, k;

    // Input first sorted array
    printf("Enter %d elements of first sorted array:\n", m);
    for(i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second sorted array
    printf("Enter %d elements of second sorted array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge both arrays
    i = 0; j = 0; k = 0;
    while(i < m && j < n) {
        if(arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements (if any)
    while(i < m) {
        merged[k++] = arr1[i++];
    }
    while(j < n) {
        merged[k++] = arr2[j++];
    }

    // Print merged sorted array
    printf("Merged sorted array:\n");
    for(i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}