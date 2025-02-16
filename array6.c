#include <stdio.h>

int main() {
    int n, i, evenSum = 0, oddSum = 0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    // Input numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if even or odd and sum accordingly
        if (arr[i] % 2 == 0)
            evenSum += arr[i];  // Add to even sum
        else
            oddSum += arr[i];   // Add to odd sum
    }

    // Display results
    printf("\nSum of Even Numbers: %d\n", evenSum);
    printf("Sum of Odd Numbers: %d\n", oddSum);

    return 0;
}