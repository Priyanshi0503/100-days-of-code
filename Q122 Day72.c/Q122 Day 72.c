// Question: Write a C program that opens an existing file (e.g., "info.txt") and reads its contents using fgets(). 
// The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main() {
    FILE *file;
    char line[200];

    // Open file in read mode
    file = fopen("info.txt", "r");

    // Check if file exists
    if (file == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    printf("Contents of info.txt:\n\n");

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}