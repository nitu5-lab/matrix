#include <stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    if (num < 0) {
      printf("Please enter non-negative integer.\n");
      return 1; // Indicate an error
    }

    int result = sum(num);
    printf("Sum of %d terms: %d\n", num, result);
    return 0;
}