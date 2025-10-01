#include <stdio.h>

int main() {
    char str[100];   // to store the input string
    int count = 0;

    // Taking input (with spaces allowed)
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Counting characters manually until null terminator
    while (str[count] != '\0') {
        count++;
    }

    // fgets() stores '\n' before '\0' if input is shorter than size, so adjust
    if (count > 0 && str[count - 1] == '\n') {
        count--; 
    }

    printf("Number of characters: %d\n", count);

    return 0;
}