// Write a program to take an integer array arr and an integer k as inputs. 
// Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size!\n");
        return 0;
    }

    int currentSum = 0;

    // Calculate sum of first k elements
    for(int i = 0; i < k; i++)
        currentSum += arr[i];

    int maxSum = currentSum;

    // Sliding window technique
    for(int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, maxSum);

    return 0;
}