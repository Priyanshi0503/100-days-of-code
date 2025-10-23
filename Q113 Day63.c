// Program to find the kth smallest element in an array

#include <stdio.h>

// Function to sort the array using simple Bubble Sort
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input k
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    // Sort the array
    sortArray(arr, n);
    
    // Print kth smallest element
    if (k > 0 && k <= n)
        printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
    else
        printf("Invalid value of k.\n");
    
    return 0;
}