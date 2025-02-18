#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 41 // 40 characters + null terminator

int main() {
    FILE *fp;
    char str[MAX_STR_LEN];
    int i, numStrings;

    fp = fopen("string.txt", "w"); // Open for writing

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Enter the number of strings: ");
    scanf("%d", &numStrings);
    getchar(); // Consume the newline left by scanf

    printf("Enter the strings (each string should be at most 40 characters):\n");

    for (i = 0; i < numStrings; i++) {
        fgets(str, MAX_STR_LEN, stdin); // Read string from keyboard

        // Remove trailing newline if present
        str[strcspn(str, "\n")] = 0; // Find newline, replace with null

        if(strlen(str) > 40){
            printf("String too long. Truncating.\n");
            str[40] = '\0';
        }

        fputs(str, fp);         // Write string to file
        fputs("\n", fp);      // Add newline character after each string. Important!
    }

    fclose(fp);

    // Now, display the contents of the file
    fp = fopen("string.txt", "r"); // Reopen for reading

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("\nContents of string.txt:\n");

    while (fgets(str, MAX_STR_LEN, fp) != NULL) {
        printf("%s", str); // Display the string
    }

    fclose(fp);

    return 0;
}