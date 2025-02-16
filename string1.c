#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    int vowels = 0, consonants = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char ch = tolower(str[i]); // Case-insensitive counting
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}