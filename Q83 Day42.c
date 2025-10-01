/*
Question:
Write a C program to count the number of vowels and consonants in a string.
*/

#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse each character
    while (str[i] != '\0') {
        char ch = tolower(str[i]);  // convert to lowercase for easy checking

        if (ch >= 'a' && ch <= 'z') {  // check only alphabets
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }