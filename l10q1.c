#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    char address[100];
    int age;
    float physics, c, math;
};

int main() {
    struct Student students[3];
    FILE *file = fopen("D:/drive/std.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf(" %[^]s", students[i].name);
        printf("Address: ");
        scanf(" %[^]s", students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks in Physics: ");
        scanf("%f", &students[i].physics);
        printf("Marks in C: ");
        scanf("%f", &students[i].c);
        printf("Marks in Math: ");
        scanf("%f", &students[i].math);
        fprintf(file, "%d %s %s %d %.2f %.2f %.2f\n", students[i].rollno, students[i].name, students[i].address, students[i].age, students[i].physics, students[i].c, students[i].math);
    }
    fclose(file);
    file = fopen("D:/drive/std.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\nStudent Details:\n");
    while (fscanf(file, "%d %[^]s %[^]s %d %f %f %f", &students[0].rollno, students[0].name, students[0].address, &students[0].age, &students[0].physics, &students[0].c, &students[0].math) != EOF) {
        float avg = (students[0].physics + students[0].c + students[0].math) / 3.0;
        printf("\nRoll Number: %d\n", students[0].rollno);
        printf("Name: %s\n", students[0].name);
        printf("Address: %s\n", students[0].address);
        printf("Age: %d\n", students[0].age);
        printf("Physics: %.2f, C: %.2f, Math: %.2f\n", students[0].physics, students[0].c, students[0].math);
        printf("Average Marks: %.2f\n", avg);
    }
    fclose(file);
    return 0;
}
