#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers between 0 and %d (one number missing):\n", n, n);
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    int total = n * (n + 1) / 2;
    int missing = total - sum;
    
    printf("The missing number is: %d\n", missing);
    
    return 0;
}