/*
Q127 (File Handling)
Write a program that reads text from input.txt, converts all lowercase 
letters to uppercase, and writes the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    int ch;

    // Open input file
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read each character, convert to uppercase, write to output
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    printf("Conversion complete. Check output.txt\n");

    fclose(fin);
    fclose(fout);

    return 0;
}