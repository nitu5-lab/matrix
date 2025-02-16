int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    int wordCount = 0;
    int len = strlen(str);
    int inWord = 0; // Flag to track if we're inside a word

    for (int i = 0; i < len; i++) {
        if (isalnum(str[i])) { // Check if it's an alphanumeric character
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Number of words: %d\n", wordCount);
    return 0;
}