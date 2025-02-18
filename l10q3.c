#include <stdio.h>
#include <ctype.h>
#include <string.h> // Include for string functions

int main() {
    FILE *fp;
    char ch;
    int charCount = 0;
    char word[100]; // Array to store a word (adjust size as needed)
    int wordIndex = 0;

    fp = fopen("filec.txt", "r");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '/') {  // Basic comment handling (single-line only)
            char nextCh = fgetc(fp);
            if (nextCh == '/') {
                while ((ch = fgetc(fp)) != '\n' && ch != EOF);
                continue; // Skip the rest of the line
            } else {
                ungetc(nextCh, fp); // Not a comment, put the char back
            }
        }

        if (isalnum(ch)) { // Check if it's alphanumeric (part of a word)
            word[wordIndex++] = ch; // Add to the current word
        } else if (wordIndex > 0) { // If we have a complete word
            word[wordIndex] = '\0'; // Null-terminate the word
            printf("Word: %s\n", word); // Print the word (optional)
            wordIndex = 0; // Reset for the next word
        }
    }

    if (wordIndex > 0) { // Check for any remaining word at the end of the file
        word[wordIndex] = '\0';
        printf("Word: %s\n", word);
    }



    fclose(fp);

    // If you still need a character count (excluding comments)
    fp = fopen("filec.txt", "r"); // Reopen to count
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
     while ((ch = fgetc(fp)) != EOF) {
        if (ch == '/') {  // Basic comment handling (single-line only)
            char nextCh = fgetc(fp);
            if (nextCh == '/') {
                while ((ch = fgetc(fp)) != '\n' && ch != EOF);
                continue; // Skip the rest of the line
            } else {
                ungetc(nextCh, fp); // Not a comment, put the char back
            }
        }
        if (isalnum(ch)){
            charCount++;
        }
    }
    fclose(fp);
    printf("Number of alphanumeric characters (excluding simple comments): %d\n", charCount);

    return 0;
}