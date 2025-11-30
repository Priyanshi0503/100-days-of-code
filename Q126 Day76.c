/*
Q126 (File Handling)
Ask the user for a filename. Check if it exists by trying to open it in 
read mode. If the file pointer is NULL, print an error message; otherwise, 
read and display its content.
*/

#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char line[200];

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    // Read and display content
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}