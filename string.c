#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99[^\n]", str);  // Read up to 99 characters or newline

    int len = strlen(str);
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        while (i < j && !isalnum(str[i])) {
            i++;
        }
        while (i < j && !isalnum(str[j])) {
            j--;
        }
        if (i < j && tolower(str[i]) != tolower(str[j])) {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }

    printf("%s is a palindrome\n", str);
    return 0;
}