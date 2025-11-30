/*
Q125 (File Handling)
Open an existing file in append mode and allow the user to enter a new 
line of text. Append the text at the end without overwriting existing content.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Get filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Clear input buffer before fgets()
    getchar();

    // Get line of text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    printf("Text appended successfully.\n");

    fclose(fp);
    return 0;
}