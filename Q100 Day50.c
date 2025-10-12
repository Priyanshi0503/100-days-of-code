// Question: Write a C program to print all sub-strings of a given string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("All substrings of the given string are:\n");

    // Generate and print all substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    return 0;
}