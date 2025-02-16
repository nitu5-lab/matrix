#include <stdio.h>

int main() {
    int rows, cols;

    // Get the order (dimensions) of the matrix from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix (2D array)
    int matrix[rows][cols];

    // Get the elements of the matrix from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and display the matrix with elements raised to the power of 3
    printf("Matrix with elements raised to the power of 3:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            long long power_of_3 = 1; // Use long long to handle potential overflow
            for (int k = 0; k < 3; k++) {  //Efficiently calculate power of 3
                power_of_3 *= matrix[i][j];
            }
            printf("%lld\t", power_of_3); // Print with tab spacing for better formatting
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}