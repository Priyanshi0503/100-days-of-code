// Program to find the maximum sum of a contiguous subarray using Kadane's Algorithm

#include <stdio.h>

int main() {
    int n;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int maxSum = arr[0];     // Initialize with first element
    int currentSum = arr[0]; // Current running sum
    
    // Apply Kadane's Algorithm
    for (int i = 1; i < n; i++) {
        // Either extend the current subarray or start a new one
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];
        
        // Update maxSum if we found a new maximum
        if (currentSum > maxSum)
            maxSum = currentSum;
    }
    
    // Output result
    printf("Maximum subarray sum: %d\n", maxSum);
    
    return 0;
}