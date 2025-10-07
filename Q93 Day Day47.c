#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Question: Write a C program to check if two strings are anagrams of each other.

#define MAX 100

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str1[MAX], str2[MAX];
    int count[256] = {0}; // Array to store frequency of characters

    printf("Enter first string: ");
    fgets(str1, MAX, stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline

    printf("Enter second string: ");
    fgets(str2, MAX, stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline

    // Convert both strings to lowercase for case-insensitive comparison
    toLowerCase(str1);
    toLowerCase(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    // Count characters in first string
    for (int i = 0; str1[i]; i++) {
        count[(int)str1[i]]++;
    }

    // Subtract characters using second string
    for (int i = 0; str2[i]; i++) {
        count[(int)str2[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}