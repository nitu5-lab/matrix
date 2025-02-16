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
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float average = sum / n;
    printf("Average: %.2f\n", average);
    return 0;
}