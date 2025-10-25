#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0}; // For lowercase letters only
    int i;

    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // If lengths differ, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of each character in s
    for (i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    // Subtract frequency for each character in t
    for (i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    // Check if all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}