int main() {
    char names[5][50];
    printf("Enter the names of 5 people:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%49[^\n]", names[i]);
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nSorted names:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}