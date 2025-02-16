#include <stdio.h>

int main() {
    int n, i, positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Input array length
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Count positive, negative, and zero elements
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    // Display the results
    printf("\nTotal Positive Numbers: %d\n", positiveCount);
    printf("Total Negative Numbers: %d\n", negativeCount);
    printf("Total Zeros: %d\n", zeroCount);

    return 0;
}