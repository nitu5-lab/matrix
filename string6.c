#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[200];
    char word[50];

    printf("Enter the text: ");
    scanf("%199[^\n]", text);
    printf("Enter the word to search: ");
    scanf(" %49[^\n]", word); // Space to consume leftover newline

    int textLen = strlen(text);
    int wordLen = strlen(word);
    int count = 0;

    for (int i = 0; i <= textLen - wordLen; i++) {
        int j;
        for (j = 0; j < wordLen; j++) {
            if (tolower(text[i + j]) != tolower(word[j])) {
                break;
            }
        }
        if (j == wordLen) {
            count++;
        }
    }

    printf("The word '%s' appears %d times in the text.\n", word, count);

    return 0;
}