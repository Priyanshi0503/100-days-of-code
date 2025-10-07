#include <stdio.h>
#include <string.h>

// Question: Write a C program to reverse each word in a sentence without changing the word order.

#define MAX 200

// Function to reverse a portion of the string from start to end indices
void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[MAX];
    printf("Enter a sentence: ");
    fgets(sentence, MAX, stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove newline character

    int start = 0;
    int len = strlen(sentence);

    for (int i = 0; i <= len; i++) {
        // If we reach a space or the end of the string, reverse the word
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverseWord(sentence, start, i - 1);
            start = i + 1; // Move to the start of the next word
        }
    }

    printf("Sentence with reversed words: %s\n", sentence);

    return 0;
}