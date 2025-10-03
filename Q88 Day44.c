#include <stdio.h>

// Question: Write a C program to replace spaces with hyphens ('-') in a string.

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string including spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';   // replace space with hyphen
        }
    }

    printf("Modified string: %s", str);

    return 0;
}