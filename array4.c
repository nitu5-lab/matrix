#include <stdio.h>

void sortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) { // Swap if the previous element is smaller
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    // Input marks
    printf("Enter marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // Sort marks in descending order
    sortDescending(marks, n);

    // Display top 5 marks
    printf("\nTop 5 Marks:\n");
    for (int i = 0; i < (n < 5 ? n : 5); i++) {  // Print top 5 or all if less than 5
        printf("%d\n", marks[i]);
    }

    return 0;
}