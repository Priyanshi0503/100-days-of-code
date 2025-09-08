//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    long long binary = 0;
    int place = 1;

    while (n > 0) {
        int rem = n % 2;          
        binary = rem * place + binary;
        n = n / 2;                
        place *= 10;
    }

    printf("Binary = %lld\n", binary);
    return 0;
}