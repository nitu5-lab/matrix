#include <stdio.h>

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
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
    int m, n, p;
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];

    // Input matrix sizes
    printf("Enter rows and columns for first matrix (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter columns for second matrix (p): ");
    scanf("%d", &p);

    // Input first matrix
    printf("Enter elements of first matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &firstMatrix[i][j]);

    // Input second matrix
    printf("Enter elements of second matrix (%dx%d):\n", n, p);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &secondMatrix[i][j]);

    // Multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, m, n, p);

    // Display result
    printf("\nResultant Matrix (%dx%d):\n", m, p);
    displayMatrix(result, m, p);

    return 0;
}