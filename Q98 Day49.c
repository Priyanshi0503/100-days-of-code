/*
Question: Print the initials of a name with the surname displayed in full.
Example:
 Input:  "john ronald reuel tolkien"
 Output: "J. R. R. Tolkien"
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[256];
    char words[20][50];  // to store individual words
    int count = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // remove trailing newline if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';

    // split the name into words
    char *token = strtok(name, " ");
    while (token != NULL) {
        strcpy(words[count++], token);
        token = strtok(NULL, " ");
    }

    // print initials for all but the last word
    for (int i = 0; i < count - 1; i++) {
        printf("%c. ", toupper(words[i][0]));
    }

    // print the last word (surname) in full with first letter capitalized
    if (count > 0) {
        words[count - 1][0] = toupper(words[count - 1][0]);
        printf("%s", words[count - 1]);
    }

    printf("\n");
    return 0;
}