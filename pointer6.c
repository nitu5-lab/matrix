#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    int transpose[c][r];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            *(*(transpose + j) + i) = *(*(mat + i) + j);
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}