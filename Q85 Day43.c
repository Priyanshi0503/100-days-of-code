// Q: Write a C program to reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len, j;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    j = 0;

    // Reversing string
    for (i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';  // Null terminate the reversed string

    printf("Reversed string: %s\n", rev);

    return 0;
}