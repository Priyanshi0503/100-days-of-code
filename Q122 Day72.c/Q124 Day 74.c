/*
   Q) Take two filenames from the user – a source file and a destination file.
      Copy all the content from the source file to the destination file 
      using fgetc() and fputc(). Write a code in C language.
*/

#include <stdio.h>

int main() {
    char source[100], dest[100];
    FILE *fs, *fd;
    int ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    fs = fopen(source, "r");
    if (fs == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(fs);
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    printf("File copied successfully!\n");

    fclose(fs);
    fclose(fd);

    return 0;
}