#include <stdio.h>

int main() {
    int n, i, evenSum = 0, oddProduct = 1, hasOdd = 0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    // Input numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if even or odd and process accordingly
        if (arr[i] % 2 == 0)
            evenSum += arr[i];  // Sum even numbers
        else {
            oddProduct *= arr[i];  // Multiply odd numbers
            hasOdd = 1;  // To track if there are any odd numbers
        }
    }

    // Display results
    printf("\nSum of Even Numbers: %d\n", evenSum);

    // If no odd numbers, product remains 1, so set it to 0
    if (hasOdd)
        printf("Product of Odd Numbers: %d\n", oddProduct);
    else
        printf("Product of Odd Numbers: 0 (No odd numbers entered)\n");

    return 0;
}