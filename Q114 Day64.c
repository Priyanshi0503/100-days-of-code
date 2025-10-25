#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int lastIndex[256]; // To store last index of each character
    int i, start = 0, maxLen = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    // Initialize all last indices as -1
    for (i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (i = 0; s[i] != '\0'; i++) {
        // If this character was seen before, move the start
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        // Update last seen index of current character
        lastIndex[(unsigned char)s[i]] = i;

        // Update maximum length
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}