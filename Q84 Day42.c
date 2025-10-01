/*
Question:
Write a C program to convert a lowercase string to uppercase 
without using built-in functions.
*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to uppercase manually
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // ASCII difference between lowercase & uppercase
        }
        i++;
    }

    // Output string
    printf("Uppercase string: %s", str);

    return 0;
}