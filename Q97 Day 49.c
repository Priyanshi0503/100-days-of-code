/* 
Question: Print the initials of a name.
Example:
 Input:  "john ronald reuel tolkien"
 Output: "J. R. R. T."
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char name[256];

    /* read a full line (name may contain spaces) */
    if (fgets(name, sizeof(name), stdin) == NULL) return 0;

    /* remove trailing newline if present */
    size_t len = strlen(name);
    if (len > 0 && name[len-1] == '\n') name[len-1] = '\0';

    int printed = 0;
    for (size_t i = 0; name[i] != '\0'; ++i) {
        /* first non-space char is an initial */
        if (i == 0 && !isspace((unsigned char)name[i])) {
            printf("%c. ", (char)toupper((unsigned char)name[i]));
            printed = 1;
        }
        /* if current char is space and next non-space exists, that's next initial */
        if (isspace((unsigned char)name[i])) {
            size_t j = i + 1;
            while (name[j] != '\0' && isspace((unsigned char)name[j])) ++j;
            if (name[j] != '\0') {
                printf("%c. ", (char)toupper((unsigned char)name[j]));
                printed = 1;
            }
        }
    }

    if (!printed) {
        /* empty or only spaces */
        printf("(no name provided)");
    }

    printf("\n");
    return 0;
}