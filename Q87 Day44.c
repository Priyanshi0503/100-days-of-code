#include <stdio.h>

// Question: Write a C program to count spaces, digits, and special characters in a string.

int main() {
    char str[200];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string including spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') || 
                 (str[i] >= 'a' && str[i] <= 'z')) {
            // letters → do nothing
        }
        else if (str[i] != '\n') {   // ignore newline from fgets
            special++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}