#include <stdio.h>

int main() {
    int arr[100], reversedArr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        reversedArr[i] = arr[n - 1 - i];
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", reversedArr[i]);
    }
    printf("\n");

    return 0;
}