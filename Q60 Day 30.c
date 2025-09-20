//Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main() {
    int n, i, positive_count = 0, negative_count = 0, zero_count = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive count: %d\n", positive_count);
    printf("Negative count: %d\n", negative_count);
    printf("Zero count: %d\n", zero_count);

    return 0;
}