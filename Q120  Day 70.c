// Question: Write a program in C to take a string input from the user and convert it into sentence case.
// (Sentence case means the first letter should be uppercase and all other letters should be lowercase.)

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // take input from user

    // convert entire string to lowercase first
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }

    // capitalize the first letter if it exists
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }

    printf("Sentence case: %s", str);

    return 0;
}