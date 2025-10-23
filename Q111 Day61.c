// Program to find the first negative integer in each subarray of size k

#include <stdio.h>

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
    
    // Input window size
    printf("Enter the window size k: ");
    scanf("%d", &k);
    
    printf("First negative integer in each subarray of size %d:\n", k);
    
    // Loop through each window
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0; // default if no negative found
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNeg = arr[i + j];
                break;
            }
        }
        printf("%d ", firstNeg);
    }
    
    return 0;
}