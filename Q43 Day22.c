//Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0, factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        factorial = 1;

        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }

        result += factorial;
        num /= 10;
    }

    if (result == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}