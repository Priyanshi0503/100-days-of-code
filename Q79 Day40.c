#include <stdio.h>

#define ROW 3
#define COL 3

void diagonalTraversal(int mat[ROW][COL], int m, int n) {
    // Loop over the sum of indices (i+j)
    for (int d = 0; d < m + n - 1; d++) {
        int row = (d < n) ? 0 : d - n + 1;
        int col = (d < n) ? d : n - 1;

        while (row < m && col >= 0) {
            printf("%d ", mat[row][col]);
            row++;
            col--;
        }
        printf("\n"); // for each diagonal
    }
}

int main() {
    int mat[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Diagonal Traversal of Matrix:\n");
    diagonalTraversal(mat, ROW, COL);

    return 0;
}