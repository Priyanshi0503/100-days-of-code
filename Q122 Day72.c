/*
Q122 (File Handling)
Write a C program that opens an existing file (e.g., info.txt) 
and reads its contents using fgets(). The program should print 
all the lines to the console until EOF (end of file) is reached.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");   // open existing file in read mode

    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    // Read and print lines until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}