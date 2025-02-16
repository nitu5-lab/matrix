#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input: Number of elements must be positive.\n");
        return 1;
    }
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int max = *ptr; // Initialize with the first element
    int min = *ptr; // Initialize with the first element
    for (int i = 1; i < n; i++) { // Start from the second element
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);
    return 0;
}