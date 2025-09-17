//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main () {
    int n, i, j, Prime;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        Prime = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                Prime = 0; 
                break;
            }
        }
        if (Prime)
            printf("%d ", i);
    }

    return 0;
}