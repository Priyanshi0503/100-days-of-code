//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, temp, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10) {
        temp = temp / 10;
        count++;
    }
    first = temp;

    temp = num / 10;
    int pow10 = 1;
    for (int i = 0; i < count - 1; i++) {
        pow10 = pow10 * 10;
    }
    int middlePart = temp % pow10;

    int swapped = last;
    swapped = swapped * pow10 + middlePart;
    swapped = swapped * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}