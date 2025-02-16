#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter dimensions of matrix 1 (rows columns): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter dimensions of matrix 2 (rows columns): ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrices cannot be multiplied.\n");
        return 1;
    }
    int mat1[r1][c1];
    int mat2[r2][c2];
    int result[r1][c2];
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}