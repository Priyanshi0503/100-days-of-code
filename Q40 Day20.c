#include <stdio.h>

/* 
   Question: Write a program to find the 1's complement of a binary number 
   and print it  
*/

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid input! Please enter a binary number (0s and 1s only).\n");
            return 1;
        }
    }

    printf("1's Complement = %s\n", binary);

    return 0;
}