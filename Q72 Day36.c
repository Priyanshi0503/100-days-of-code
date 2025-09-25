//Find the sum of all elements in a matrix.
#include <stdio.h>

int main () {
    int matrix[10][10], rows, cols, sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}