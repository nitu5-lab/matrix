#include <stdio.h>

void displayString(char str[]) {
    printf("The string is: %s\n", str);
}

int main() {
    char myString[100];
    printf("Enter a string: ");
    scanf("%99[^\n]", myString); // Limit input to prevent buffer overflows

    displayString(myString);
    return 0;
}