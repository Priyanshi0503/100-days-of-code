//Write a program to print all factors of a given number.

#include <stdio.h>
int main() {
    int num;
    printf("Give the desired number: ");
    scanf("%d", &num);

    printf("The factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}