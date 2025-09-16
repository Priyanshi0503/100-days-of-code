/*Write a program to print the following pattern:

*

***

*****
*******
***

*

*/

#include <stdio.h>

int main() {
    int i, j;

    
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        if (i == 1 || i == 2) 
            printf("\n\n");
        else
            printf("\n");
    }
    for (i = 2; i >= 1; i--) {
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        if (i == 2)  
            printf("\n\n");
        else
            printf("\n");
    }

    return 0;
}