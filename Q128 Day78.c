#include <stdio.h>
#include <ctype.h>

int main() {
    // Q128 (File Handling)
    // Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

    FILE *file;
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // Convert character to lowercase for easier comparison
        if (ch >= 'a' && ch <= 'z') { // Check if it's an alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}