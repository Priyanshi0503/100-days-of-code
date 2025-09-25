//Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    // Normalize k
    k = k % n;

    // Rotate the array
    int temp[100];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy the rotated array back
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}