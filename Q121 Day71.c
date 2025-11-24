// Question: Write a C program that creates a text file named "info.txt" in write mode. 
// The program should take the user's name and age as input, and write them to the file using fprintf(). 
// After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    // Open file in write mode
    file = fopen("info.txt", "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error! Could not create file.\n");
        return 1;//
    }

    // Take input from user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // reads name including spaces

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to the file
    fprintf(file, "Name: %sAge: %d\n", name, age);

    // Close the file
    fclose(file);

    // Display confirmation message
    printf("Data successfully saved to info.txt\n");

    return 0;
}
