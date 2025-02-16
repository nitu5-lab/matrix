#include <stdio.h>

void transposeMatrix(int matrix[][10], int transposed[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    int matrix[10][10], transposed[10][10];

    // Input matrix size
    printf("Enter rows and columns of the matrix (m n): ");
    scanf("%d %d", &m, &n);

    // Input matrix elements
    printf("Enter elements of the matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Compute transpose
    transposeMatrix(matrix, transposed, m, n);

    // Display original matrix
    printf("\nOriginal Matrix (%dx%d):\n", m, n);
    displayMatrix(matrix, m, n);

    // Display transposed matrix
    printf("\nTransposed Matrix (%dx%d):\n", n, m);
    displayMatrix(transposed, n, m);

    return 0;
}