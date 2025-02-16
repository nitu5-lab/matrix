#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input: Number of students must be positive.\n");
        return 1;
    }
    float marks[n];
    printf("Enter the marks of the students:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &marks[i]);
    }
    float sum = 0;
    float *ptr = marks;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    float average = sum / n;
    printf("Average marks: %.2f\n", average);
    return 0;
}