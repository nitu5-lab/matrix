#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;
    float height;
    int numPeople;  // Number of people to record
    int i;

    // Write to file
    fp = fopen("person.txt", "w");

    if (fp == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    printf("Enter the number of people: ");
    scanf("%d", &numPeople);
    getchar(); // Consume the newline after scanf

    for (i = 0; i < numPeople; i++) {
        printf("Enter details for person %d:\n", i + 1);
        printf("Name: ");
        fgets(name, sizeof(name), stdin); // Use fgets to prevent buffer overflows
        name[strcspn(name, "\n")] = 0;   // Remove trailing newline if present
        printf("Age: ");
        scanf("%d", &age);
        printf("Height (in meters): ");
        scanf("%f", &height);
        getchar(); // Consume newline

        fprintf(fp, "%s %d %.2f\n", name, age, height); // Write formatted data
    }

    fclose(fp);

    // Read from file
    fp = fopen("person.txt", "r");

    if (fp == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("\nData from person.txt:\n");

    while (fscanf(fp, "%s %d %f", name, &age, &height) == 3) { // Check for successful read
        printf("Name: %s, Age: %d, Height: %.2f meters\n", name, age, height);
    }

    fclose(fp);

    return 0;
}