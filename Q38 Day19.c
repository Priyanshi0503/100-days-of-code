//Write a program to find the sum of digits of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        sum += num % 10;
        num /= 10;//
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
