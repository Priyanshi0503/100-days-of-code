// Q: Write a C program to remove all vowels from a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        // check if character is not a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j++] = ch;
        }
    }
    result[j] = '\0'; // null terminate the new string

    printf("String after removing vowels: %s", result);
    return 0;
}