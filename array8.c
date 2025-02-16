#include <stdio.h>

int main() {
    int m, n, i, j;

    // Input matrix size
    printf("Enter the number of rows (m) and columns (n): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n]; // Declare matrix

    // Input matrix elements
    printf("Enter elements of the matrix (%dx%d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Add 2 to each element
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] += 2;
        }
    }

    // Display modified matrix
    printf("\nModified Matrix (Each element +2):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;