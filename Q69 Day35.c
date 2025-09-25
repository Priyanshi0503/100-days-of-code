//Find the second largest element in an array with input.

#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;

    if (n < 2) {
        printf("Invalid Input");
        return 0;
    }

    first = second = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -1) {
        printf("No second largest element");
    } else {
        printf("The second largest element is %d\n", second);
    }

    return 0;
}