#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    printf("Enter a name: ");
    scanf("%49[^\n]", name);
    int len = strlen(name);
    printf("ASCII codes for %s:\n", name);
    for (int i = 0; i < len; i++) {
        printf("%c: %d\n", name[i], name[i]);
    }
    return 0;