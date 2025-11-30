/*
Q124 (File Handling)
Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using 
fgetc() and fputc().
*/

#include <stdio.h>

int main() {
    char srcFile[100], destFile[100];
    FILE *src, *dest;
    int ch;

    // Taking filenames from user
    printf("Enter source filename: ");
    scanf("%s", srcFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file for reading
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open destination file for writing
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(src);
        return 1;
    }

    // Copy content using fgetc() and fputc()
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}