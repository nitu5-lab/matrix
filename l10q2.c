#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    char ch;
    if (file == NULL) {
        return 1;
    }
    printf("Enter characters (Press Enter to stop):\n");
    while ((ch = getchar()) != '\n') {
        fputc(ch, file);
    }
    fclose(file);
    return 0;
}
