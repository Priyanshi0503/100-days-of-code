// Q: Write a C program to toggle the case of each character in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert lowercase to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // convert uppercase to lowercase
        }
    }

    printf("Toggled string: %s", str);
    return 0;
}