/*
   Q) Read a text file and count the total number of characters, 
      words, and lines. A word is defined as a sequence of 
      non-space characters separated by spaces or newlines.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n')
            lines++;

        // Count words
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;  // entering a word
            words++;
        } else if (isspace(ch)) {
            inWord = 0;  // leaving a word
        }
    }

    fclose(fp);

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}