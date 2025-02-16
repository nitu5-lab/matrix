#include <stdio.h>
#include<conio.h>
int main() {
    int matrix[2][3]; // 2x3 matrix
    int i, j;

    // Reading input
    printf("Enter elements for a 2x3 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Displaying matrix
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
