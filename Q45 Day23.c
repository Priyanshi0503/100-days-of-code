//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4 * i - 1);
    }

    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}