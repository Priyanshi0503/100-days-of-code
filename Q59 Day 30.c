//Count even and odd numbers in an array with given input.

#include <stdio.h>

int main() {
    int n, i, even_count = 0, odd_count = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even count: %d\n", even_count);
    printf("Odd count: %d\n", odd_count);

    return 0;
}